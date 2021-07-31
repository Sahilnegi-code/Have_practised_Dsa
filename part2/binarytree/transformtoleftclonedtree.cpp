
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
node* left_node(node*left ,node * root){
node * temp = new node(root->data);
if(left!=NULL){

temp->left=left;
}
return temp;

}

    node * createLeftclonetree(node *root){
if(root==NULL){
    return NULL;
}
node * left = createLeftclonetree(root->left);
node * right = createLeftclonetree(root->right);
node * left_new = left_node(left,root);
root->left=left_new;
return root;
}
void printpathtoleaf(node * root ,string path){
    if(root==NULL){
        cout<<path<<endl;
        return ;

    }
    if(root->left==NULL && root->right==NULL){
        cout<<path+ to_string(root->data)<<endl;
        return;
    }
    printpathtoleaf(root->left,path+to_string(root->data)+" ");
    printpathtoleaf(root->right,path+to_string(root->data)+" ");

}

int main()
{
node * root=new node(1);
root->left=new node(2);
root->right=new node (3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node (6);
root->right->right= new node(7);

createLeftclonetree(root);
printpathtoleaf(root,"");

    return 0;
}



