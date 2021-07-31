#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * right;
    node * left;
    node(int data){
this->data =data;
right= NULL;
left=  NULL;
}

};
  int size(node * root){
      if(root==NULL){
          return 0;

      }

      int left =size(root->left);
     int right=  size(root->right);
     int full_Size= left + right +1; 
     return full_Size;

  } 
  int sum(node * root){
      if(root==NULL){
          return 0;
      }
      int left = sum(root->left);
      int right = sum(root->right);
      return (left + right + root->data );

  }
  int max(int x ,int y,int z){
      if(x>y && x>z){
          return x;
      }
      else if(y>x && y>z){
          return y;

      }
      else{
          return z;

      }
  }
  int max_of_two(int num1 ,int num2){
return num1>num2?num1:num2;
      
  }
  int max_of_binary_tree(node * root){
      if(root==NULL){
          return 0;
      }

      int left = max_of_binary_tree(root->left);
      int right =max_of_binary_tree(root->right);
      return (max(left,right,root->data));


  }
  int height(node * root){
   if(root==NULL){
          return 0;
      }

      int left = height(root->left);
      int right =height(root->right);
      return max_of_two(left,right)+1;


     
  }
int main(){
    node * root = new node(1) ;
    root->left = new node(2);
    root->right = new node(3);
    root->left->left=new node(24);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);
    root->right->right->right= new node(8);
        cout<<height(root)<<endl;
        // cout<<sum(root);
        // cout<< max_of_binary_tree(root);

    //       1
    //    /     \
    //    2       3
    //   / \     / \
    // 4     5  6    7
                    //  \
                    //  8
                    
                      
    return 0;
}