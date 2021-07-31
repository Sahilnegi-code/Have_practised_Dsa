#include<iostream>
#include<string>
using namespace std;
class node{
    public:
int val;
node *next;
node(int val){
    this->val =val;
    next=NULL;
    
    }

};
void insertatend(int val, node* &head){


node *newnode = new node(val);
if(head==NULL){
    head = newnode;
    return;
}
node *temp=head;/*this indicates  first node*/

while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode
;
}
void display(node *head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
        }


}

void insertathead(node* &head,int value){
    node *newnode = new node(value);
    newnode->next=head;
 
     head=newnode;
}
void deletion(node* &head, int value ){


    node* p = head;/*here head is an address*/
    node * q = head->next;/* here head ka andar  uska next */
    while( q->val !=value && q->next != NULL ){
         p=p->next;
         q=q->next;
                      }
        p->next=q->next;



delete p;             

    


}

int main(){
    node *head=NULL; 
    insertatend(1,head);
    insertatend(2,head);
    insertatend(3,head);
    insertatend(4,head);
    // insertathead(head,0);
    // display(head);
    // insertatend(1,head);
    deletion(head,1);
display(head);
    return 0;
}