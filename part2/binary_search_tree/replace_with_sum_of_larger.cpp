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
static int sum =0;
void reverseInorder(node *root){
    if(root==NULL){
        return;
    }

    reverseInorder(root->right);
    int val= root->data ;
    root->data = sum;
    sum += val;


    reverseInorder(root->left);


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