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
void printpathtoleaf(node * root ,string path){
    if(root==NULL){
        cout<<path<<endl;

    }
    if(root->left==NULL && root->right==NULL){
        cout<<path+ to_string(root->data)<<endl;
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
root->right->right->right=new node(8);
printpathtoleaf(root,"");
    return 0;
}


