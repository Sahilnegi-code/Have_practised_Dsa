#include<iostream>
#include<vector>
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

bool nodetorootpath(node *root ,int find ,vector<string > &v){
    if(root==NULL){ 
        return false;
    }
    if((root->data)==find){
        v.push_back(to_string(root->data) +" ");
        return true;
    }
    bool left = nodetorootpath(root->left,find,v);
    if(left ==true){
        v.push_back(to_string(root->data) +" ");

        return true;
    }
    bool right = nodetorootpath(root->right,find,v);
if(right ==true){
        v.push_back(to_string(root->data) +" ");
    return true;
}
return false;

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
vector <string> v;
int find = 2;
cout<<nodetorootpath(root, find , v );
for(int i=0;i<v.size();i++){
    cout<<v[i];
    }
// v.push_back(stoi(3));






    return 0;
}

