#include<bits/stdc++.h>
#include<iostream>
// #include<bits/stdc++.h>
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
node * transformbackfromleftclonedtree(node * root){
    if(root ==NULL){
        return NULL;
    }
node * left = transformbackfromleftclonedtree(root->left->left);
node * right = transformbackfromleftclonedtree(root->right);
node * temp = root->left;
delete temp;
root->left = left;
root->right = right;
return root;
}
int main(){

    return 0;
}