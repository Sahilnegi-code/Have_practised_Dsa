

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
int data ;
node * left;
node * right ;
node(int val){
data = val;
left = NULL;
right = NULL;
}

node (int data , node * left , node * right ){
    this->data = data ;
    this->left = left ;
    this->right =right;
}
};
int lowestAncestor(node * root , int l ,int h){
if(root->data>l && root->data>h ){
int val =lowestAncestor(root->left,l,h);
return val;
}
else if(root->data<l && root->data <h){
int val = lowestAncestor(root->right,l,h);
return val; 
}
else{
    return root->data;
}
}

int main(){
node * root=new node(50);
root->left=new node(25);
root->right=new node (75);
root->left->left=new node(12);
root->left->right=new node(37);
root->right->left=new node (62);

root->right->right= new node(87);
root->left->right->left= new node(30);
root->left->right->right= new node(40);
root->right->left->right= new node(70);
root->right->left->left= new node(60);

    return 0;
}