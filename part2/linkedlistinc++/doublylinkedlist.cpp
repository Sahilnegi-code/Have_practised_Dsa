#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
     node * prev ;
        node * next ;
    node(int val){
        data =val;
         prev =NULL;
         next =NULL;
           }
};
void  InsertAtHead(node * &head , int val){
    node * n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->prev=head;
    head->prev=n;
    head=n;

}
void InsertAtTail(node * &head ,int val){
    if(head==NULL){
       InsertAtHead(head,val);
        return;
    }
    node * n = new node(val);
    node * temp = head;
    while(temp->next !=NULL){
        temp=temp->next;


    }
    n->prev=temp;
    temp->next=n;
}
void display(node * &head)
{
    node * temp =head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;

    }
}
void    DeleteAtHeadAtDoublyCircularLinkedList(node * &head){


    node *todel = head;
    head->next->prev=NULL;
    head=head->next;
    delete todel;



}
void deletion(node * &head , int pos){
    if(pos==1){
        DeleteAtHeadAtDoublyCircularLinkedList(head);
        return;
    }
node * temp =head;
int count =1;
while(count != pos && temp != NULL){
   temp= temp->next;
    count++;
}
node * todel = temp;
if(temp->next==NULL){
    temp->prev->next=NULL;
    delete todel;
    return;  

}
    temp->prev->next =temp->next;
    temp->next->prev=temp->prev;
    delete todel;

}
 int main(){

node * head =NULL;
// InsertAtHead(head,2);
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAtTail(head,3);
InsertAtTail(head,4);
InsertAtTail(head,5);
display(head);
deletion(head,5);
display(head);


     return 0;

 }