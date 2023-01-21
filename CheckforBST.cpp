#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left;
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};


// Method 2(Correct but not efficient)
int maxValue(Node *root){
    if (root == NULL) 
        return INT_MIN; 
  
    int res = root->key; 
    int lres = maxValue(root->left); 
    int rres = maxValue(root->right); 
    if (lres > res) 
        res = lres; 
    if (rres > res) 
        res = rres; 
    return res; 
}

int minValue(Node* root) 
{ 
    if (root == NULL) 
      return INT_MAX; 
  
    int res = root->key; 
    int lres = minValue(root->left); 
    int rres = minValue(root->right); 
    if (lres < res) 
      res = lres; 
    if (rres < res) 
      res = rres; 
    return res; 
} 
int isBST(Node* root)  
{  
  if (root == NULL)  
    return 1;  
      
  if (root->left!=NULL && maxValue(root->left) > root->key)  
    return 0;  
      
  if (root->right!=NULL && minValue(root->right) < root->key)  
    return 0;  
    
  if (!isBST(root->left) || !isBST(root->right))  
    return 0;  
      
  return 1;  
}


// Method 3(Correct and Efficient)

bool isBST1(Node* root,int min, int max)  
{  
  if (root == NULL)  
    return true;  
      
  return ( root->key>min && root->key<max && 
            isBST1(root->left,min,root->key) && isBST1(root->right,root->key,max));  
}


// Method 4(Efficient Solution)
int prevv=INT_MIN;
bool isBST2(Node* root)  
{  
    if (root == NULL)  
        return true;  
    
    if(isBST2(root->left)==false)return false;
    
    if(root->key<=prevv)return false;
    prevv=root->key;
    
    return isBST2(root->right);
}

int main() {
	
	Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);  
      
      
    cout<<"Method 2(Correct but not efficient)"<<endl;
    if(isBST(root))  
        cout<<"Is BST"<<endl;  
    else
        cout<<"Not a BST"<<endl;  

    cout<<"Method 3(Correct and Efficient)"<<endl;
    if(isBST1(root,INT_MIN,INT_MAX))  
        cout<<"Is BST1"<<endl;  
    else
        cout<<"Not a BST1"<<endl;  
    
    cout<<"Method 4(Efficient Solution)"<<endl;
    if(isBST2(root))  
        cout<<"Is BST2"<<endl;  
    else
        cout<<"Not a BST2"<<endl;  
          
    return 0;  
	
}