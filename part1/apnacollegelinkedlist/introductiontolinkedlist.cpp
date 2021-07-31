#include<iostream>
#include<string>
using namespace std;
class node{
public:
int data;
node *next;
node(int val){
    data =val ;
    next = NULL;
}
};
void deletehead(node* &head){
        node * firstnode= head;
        head=firstnode->next;
        delete firstnode; 

}
void insertatend(node* &head,int val){
    
node *n = new node(val);
if(head==NULL){
    head=n;
    return;

    }
node *temp  =  head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next =n;

}
void deletion(node* &head,int value){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
 deletehead(head); 
 return;
    }
node *temp=head;


while(temp->next->data!=value){
    temp=temp->next;

}
// temp ka andar jo address
node *todelete= temp->next;
temp->next=temp->next->next;
delete todelete;
}

void display(node * &head){
    node *temp = head ;
    while(temp->next!=NULL){
cout<<temp->data<<endl;
temp=temp->next;
    }
    cout<<temp->data;

}

node* reverse (node * &head){
    node * prevptr =NULL;

    node * currptr = head;
    node *nextptr=NULL;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;



    }
    return prevptr;
}
int main(){
    node *head= NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);

    // display(head);
    cout<<endl;
    // deletion(head,3);
    // deletehead(head);
    // display(head);
    node* newhead= reverse(head);
    display(newhead);
    // display(head);


    return 0;
}