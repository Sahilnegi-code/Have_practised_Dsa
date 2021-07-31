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
void root_to_leaf(node *root,int sum ,string str,int low,int high){
if(root==NULL){
        return ;
}
if(root->left ==NULL && root->right ==NULL){
    sum = sum+ root->data;
    if(sum>=low && high>= sum ){
        cout<< str+to_string(root->data)<<endl;
    }
    return ;
    
}





root_to_leaf(root->left,sum +root->data,str+to_string(root->data) +" ",low,high);
root_to_leaf(root->right,sum +root->data,str+to_string(root->data)+ " ",low,high);


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
root_to_leaf(root,0 ,"",8,20);

    return 0;
}


