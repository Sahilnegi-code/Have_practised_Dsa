#include<iostream>
using namespace std;
class node{
    public:
    node * left;
    node * right;
    int data;
//     node(node * l , int d , node * r )

// {   

//     left = l;
//     right = r;
//     data =d;

// }
   node(int d){
       data = d;
       left = NULL;
       right = NULL;
   }

};
class bstpair{
    public:
    bool isbst;
    int max;
    int min;



}
;

bstpair isBSTtree(node * root){
    bstpair lp = isBSTtree(root->left);
    bstpair rp = isBSTtree(root->right);
    
}
signed main(){
node *root = new node(50);
root->left = new node(25);
root->right = new node(75);
root->left->left = new node(12);
root->left->right = new node(87);
root->left->right = new node(37);
root->right->left = new node(62);



    return 0;
}