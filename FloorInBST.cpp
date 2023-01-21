// floor = closest smaller or equal to value
#include<iostream>
using namespace std;
struct node{
    int data;
    node*left,*right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
// TC O(h)
node*floor(node*root,int x){
        node*res = NULL;
        while(root!=NULL){
            if(root->data==x){
                return root;
            }else if(root->data>x){
                root = root->left;
            }else{
                res = root;
                root = root->right;
            }
        }return res;
    }
void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


int main(){
    node *root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
    inorder(root);
    int flr = 19;
    cout<<endl<<"floor of "<<flr<<" : "<<(floor(root,flr)->data);
}