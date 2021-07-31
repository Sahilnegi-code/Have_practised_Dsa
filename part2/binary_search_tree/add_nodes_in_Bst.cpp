// Online C++ compiler to run C++ program online





#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
int data ;

node * left;
node * right ;


node (int val){
    data= val;
    left =NULL;
    right =NULL;

}

node (int data , node * left , node * right ){
    this->data = data ;
    this->left = left ;
    this->right =right;
}
};
int maxInBst(node * root){
    if(root==NULL){
        return 0;
    }
    int max = maxInBst(root->right);
    return max>root->data?max:root->data;
}
node * constructbst(int arr[],int low,int high){
    if(low>high){
        return NULL;
    }

int mid = (low +high)/2;
int data = arr[mid];
node * left = constructbst(arr,low,mid-1);
node * right = constructbst(arr,mid+1,high);

node * join  = new node(data,left,right);
return join;


}
void display(node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<endl;
    display(root->left); 
    display(root->right);

}

node * addNodesInBst(node * root ,int no){
    if(root==NULL){
        node * ptr = new node(no);
        return ptr;
    }
    if(root->data>no){
       root->left= addNodesInBst(root->left,no);
      
    }
    else if(root->data<no){
root->right= addNodesInBst(root->right,no);
  

    }
    else{

    }
    return root;

}

int main(){
int arr[]={1,2,3,4,5};
node * ptr = constructbst(arr,0,4);
node * ptr1=  addNodesInBst(ptr,6);

// cout<<ptr<<endl<<ptr1;
display(ptr1);


// display(ptr);
// cout<<maxInBst(constructbst(arr,0,4));
    return 0;
}