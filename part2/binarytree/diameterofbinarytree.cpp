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
    int diameter(node * root){
        if(root==NULL){
            return 0;
        }

        int ld = diameter(root->left);
        int rd = diameter(root->right);
        int third_p = height(root->left) + height(root->right ) + 2;
        int dia = max(third_p,max(ld,rd));
        return dia;
        
        
        }

        class diapair{
            public:
            int ht;
            int dia;
            };


        diapair newwayofdiameter(node * root){
            if(root ==NULL){
                diapair base;
                base.ht =-1;
                base.dia =0;
                return base;
            }

            diapair leftpair = newwayofdiameter(root->left);
            diapair rightpair = newwayofdiameter(root->right);
            diapair mp;
            mp.ht= max(leftpair.ht , rightpair.ht) +1; 
            int this_dia = leftpair.ht + rightpair.ht + 2;
            mp.dia = max(this_dia,max(leftpair.dia,rightpair.dia));
            return mp;



        }

    int height (node * root){
        if(root==NULL){
            return -1;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        return (lh>rh?lh:rh)+1;
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
diapair ans = newwayofdiameter(root);
cout<<ans.dia;



    return 0;
}
