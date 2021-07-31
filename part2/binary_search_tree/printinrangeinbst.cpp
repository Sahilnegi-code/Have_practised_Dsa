#include<iostream>
using namespace std;
class node{
    public:
    node * left;
    node * right;
    int data;

   node(int d){
       data = d;
       left = NULL;
       right = NULL;
   }

};





void print_in_range(node *root ,int low  , int high )
{

    if(root->data<low && root->data <high){

        print_in_range(root->right,low,high);

    }
    else if(root->data>low && root->data>high){
        print_in_range(root->left,low,high);


    }
    else
    {

        print_in_range(root->left,low,high);
        cout<<root->data<<endl;
        print_in_range(root->right,low,high);



    }

}













signed main(){
node *root = new node(50);
root->left = new node(25);
root->right = new node(75);
root->left->left = new node(12);
root->left->right = new node(87);
root->left->right = new node(37);
root->right->left = new node(62);

print_in_range(root,);

    return 0;
}