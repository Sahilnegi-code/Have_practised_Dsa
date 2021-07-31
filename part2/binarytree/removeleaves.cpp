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
node * removeleavesfromtree(node * root){
    if(root==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right==NULL){
        return NULL;
    }
node *left = removeleavesfromtree(root->left);
node * right = removeleavesfromtree(root->right);
root->left=left;
root->right=right;
return root;
}

int main(){
    
    return 0;
}