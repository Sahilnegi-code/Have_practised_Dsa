// Online C++ compiler to run C++ program online





#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
int data ;
node * left;
node * right ;

node (int data , node * left , node * right ){
    this->data = data ;
    this->left = left ;
    this->right =right;
}
node(int val){
    left =NULL;
    right =NULL;
    data = val;
}
};
int maxInBst(node * root){
    if(root==NULL){
        return 0;
    }
    int max = maxInBst(root->right);
    return max>root->data?max:root->data;
}

void display(node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<endl;
    display(root->left);
    display(root->right);

}
bool find_in_Bst(int find ,node * root){
    if(root==NULL){
        return false;
    }
    if(root->data == find){
        return true;
    }
if(root->data>find){
    bool left = find_in_Bst(find , root->left);
    return left;
}
else{
    bool right = find_in_Bst(find , root->left);
    return right;

}
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