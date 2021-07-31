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
void iterativeInOrder(node * root){
    if(root ==NULL){
        return;
    }
    pair<node *,int> p;
    string pre ="";
    p={root,1};
    stack<pair<node *, int >> st;
    st.push(p);
    while(st.size()>0){
        pair<node *,int> w=st.top();
        pair<node *,int> &r=st.top();
        if(w.second==1){
            cout<<w.first->data<<endl;
            r.second++;
        
            if(w.first->left != NULL){
                w.first=w.first->left;
                st.push(w);

            }
        }
            else if(w.second==2){
                // cout<<w.first->data;    
                r.second++;
                if(w.first->right !=  NULL ){
                    w.first= w.first->right;
                    st.push(w);
          
                }
            }
                else{
                    st.pop();
                }


            }





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
iterativeInOrder(root);



    return 0;
}

