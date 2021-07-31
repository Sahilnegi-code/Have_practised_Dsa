#include<iostream>
#include<string>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int val){
data = val;
next =NULL;
}


};

void insertAtend(Node* &head   ,int val){

    Node *n = new Node(val);
    if(head==NULL){
        head =n;
        return ;
    }
    Node* temp =head;
    
    while(temp->next!=NULL){
        temp = temp->next;
    }


    temp->next=n;
}
void display(Node* head){
    Node  * temp =head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";

    cout<<endl;
    
}
int main(){
    
Node *head =NULL;
insertAtend(head,1);

 
insertAtend(head,2);
insertAtend(head,3);
display(head);
return 0;
}