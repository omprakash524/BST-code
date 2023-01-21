#include<iostream>
using namespace std;
struct node{
    node*left,*right;
    int data;
    node(int k){
        data = k;
        left=right=NULL;
    }
};

// iterative implementation
bool search(node*root,int find){
    while(root!=NULL){
        if(root->data==find){
            return true;
        }else if(root->data>find){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return false;            
}

// recursive implementation
bool search1(node*root,int find){
    if(root==NULL){
        return false;}
        if(root->data==find){
            return true;
    }else if(root->data>find){
        return search1(root->left,find);
    }else{
        return search1(root->right,find);
    }
}
int main(){
    node*root = new node(50);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right = new node(70);
    root->right->left = new node(60);
    root->right->right = new node(80);
    cout<<"search recursive : "<<search1(root,20);cout<<endl;
    cout<<"search iterative : "<<search(root,20);cout<<endl;
    if(search1(root,60)){cout<<"found";}else{
        cout<<"Not found";
    }
    
    

    return 0;
}