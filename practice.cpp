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
 
 
//  void inorder
int main(){
    // -10,-3,0,5,9
    node* root = new node(-10);


    return 0;
}