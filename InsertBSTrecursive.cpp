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
// insert in BST
node*insert(node*root,int x){
    if(root==NULL){
        return new node(x);
    }else if(root->data<x){
        root->right = insert(root->right,x);
    }else if(root->data>x){
        root->left = insert(root->left,x);
    }
    return root;
}
void inorder(node*root){  // inorder traversal (tree traversal)
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
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
    node*root = new node(1);
    // root->left = new node(30);
    // root->left->left = new node(20);
    // node*root;
    // root->left->right = new node(40);
    // root->right = new node(70);
    // root->right->left = new node(60);
    // root->right->right = new node(80);
    cout<<"Binary Search Tree"<<endl;
    cout<<"search : "<<search1(root,20);cout<<endl;
    int x,y;
    cout<<"Enter no.of value want to insert : ";
    cin>>y;
    while(y!=0){
        cin>>x;
        insert(root,x);    
        if(insert(root,x)){cout<<x<<" is inserted"<<endl;}
        y--;
    }
    cout<<endl;
    inorder(root);
    
    

    return 0;
}