#include<iostream>
using namespace std;
struct node{
    node*left,*right;
    int data;
    node(int f){
        data=f;
        right=left=NULL;
    }
};

node* insert(node*root, int val){
    if(root==NULL){
        return new node(val);
    }else if(root->data>val){
        root->left=insert(root->left,val);
    }else if(root->data<val){
        root->right=insert(root->right,val);
    }
}


// tree traversal
// inorder - left - root - right
// preorder - root - left - right
// postorder - left - right - root
 
 
 void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
 }
 void preorder(node*root){
    if(root!=NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
 }
 void postorder(node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
 }

 // search
 bool search(node*root, int f){
    if(root==NULL){
        return false;
    }else if(root->data==f){
        return true;
    }else if(root->data>f){
        return search(root->left,f);
    }else if(root->data<f){
        return search(root->right,f);
    }
 }
int main(){
    // -10,-3,0,5,9
    cout<<"Binary search tree"<<endl;
    // node* root = new node(1);
    node*root;

    int x,y;
    cout<<"Enter no.of value to insert : ";
    cin>>y;
    while(y!=0){
        cin>>x;
        insert(root,x);
        if(insert(root,x)){
            cout<<x<<" is inserted"<<endl;
            y--;
        }cout<<endl;
        cout<<"Traversing BST"<<endl;
        inorder(root);
    }


    return 0;
}