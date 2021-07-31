#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
node * left;
node * right;
int data;
node(int x){
data =x;
left =NULL;
right =NULL;
}
};

void printkleveldown(node *root,int k,int initial ){

if(root==NULL || initial>(k)){
return ;

}
cout<<root->data<<endl;
    printkleveldown(root->left,k,initial+1);
    printkleveldown(root->right,k,initial+1);




}

int main(){
node * root=new node(1);
root->left=new node(2);
root->right=new node (3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node (6);
root->right->right= new node(7);
root->right->right->right=new node(8);
printkleveldown(root,1,0);
    return 0;
}