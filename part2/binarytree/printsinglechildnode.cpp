
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
        return ;

    }
    if(root->left==NULL && root->right==NULL){
        cout<<path+ to_string(root->data)<<endl;
        return;
    }
    printpathtoleaf(root->left,path+to_string(root->data)+" ");
    printpathtoleaf(root->right,path+to_string(root->data)+" ");

}




void printsinglechildnode(node * root)
{
    if(root==NULL){
        return ;

    }
    if(root->left==NULL ){
if(root->right==NULL){
    return ;
}
    cout<<root->right->data<<endl;
    // cout<<root->right->data<<endl;
 }

else{
    cout<<root->left->data<<endl;

}

    
   
    printsinglechildnode(root->left);
    printsinglechildnode(root->right);
    return ;

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
printsinglechildnode( root);

    return 0;
}



