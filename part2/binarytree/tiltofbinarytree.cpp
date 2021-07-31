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
int  tiltofbinarytree(node * root,int &store){
    if(root==NULL){
        return 0;
    }
int leftsum =tiltofbinarytree(root->left,store);
int rightsum =tiltofbinarytree(root->right,store);

 store += abs(leftsum-rightsum);


 return (leftsum + rightsum + root->data) ;


}

int main(){
node * root=new node(1);
root->left=new node(2);
root->right=new node (3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node (6);
// root->right->left->left=new node (10);
// root->right->left->right=new node (11);
root->right->right= new node(7);
// root->right->right->left= new node(9);
// root->right->right->right=new node(8);
int store =0;
tiltofbinarytree(root,store);
cout<<store;
    return 0;
}