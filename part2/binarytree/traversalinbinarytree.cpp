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
void traversal(node * root){
if(root==NULL){
    return;
}

cout<<root->data<<endl;

    traversal(root->left);
cout<<root->data<<endl;
    traversal(root->right);
cout<<root->data<<endl;
    
}
int main(){
node * root=new node(1);
root->left=new node(2);
root->right=new node (3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node (6);
root->right->right= new node(7);




    return 0;
}
