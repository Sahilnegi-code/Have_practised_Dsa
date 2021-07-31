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
void levelordertraversal(node *root){
    queue<node *> q;
q.push(root);
while(!q.empty()){
    node *temp = q.front();
    cout<<temp->data<<endl;
    q.pop();
    if(temp->left != NULL){
        q.push(temp->left);
    }
    if(temp->right != NULL){
        q.push(temp->right);

    }


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
levelordertraversal(root);
    return 0;
}