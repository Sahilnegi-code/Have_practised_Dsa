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
void printkleveldown(node *root,int k,int initial ,node * blocker ){

if(root==NULL || blocker ==root ){

return ;

}
else if(k==initial){
    cout<<root->data<<endl;
}
    printkleveldown(root->left,k,initial+1,blocker);
    printkleveldown(root->right,k,initial+1,blocker);




}
bool nodetoroot(node * root,int find ,vector<node*> &v){
    if(root==NULL ){
        return false;
    }
    if(root->data==find){
        v.push_back(root);
        return true;
    }
   bool left= nodetoroot(root->left,find,v);
   if(left==true){

        v.push_back(root);
       return true;
   }
   
   bool right= nodetoroot(root->right,find,v);
   if(right==true){
        v.push_back(root);
       return true;
   }
   return false;
   


}
void printnodeklevelfar(vector<node *> &v,int k ){

    for(int i =0;i<v.size();i++){
        printkleveldown(v[i],k-i,0,i==0?    NULL:v[i-1]);
            }


}

int main(){
node * root=new node(1);
root->left=new node(2);
root->right=new node (3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node (6);
root->right->left->left=new node (10);
root->right->left->right=new node (11);
root->right->right= new node(7);
root->right->right->left= new node(9);
root->right->right->right=new node(8);
vector<node *> v;
int find=6;
nodetoroot( root, find ,v);
int k =2;
printnodeklevelfar(v, k );
    return 0;
}