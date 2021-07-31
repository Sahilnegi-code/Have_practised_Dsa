#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node(int val ){
data = val;
node* next = NULL;
}
};
void insert_tail(node * &head , int val){
    node *n = new node(val);
    if(head==NULL){
        head =n;
        return;
}
node * temp = head;
while(temp->next !=NULL){
    temp=temp->next;
}
temp->next=n;


}

void display(node *head){
node * temp = head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}
// cout<<temp->data<<endl;

}
void deleteathead(node * &head){
    node * temp = head;
    head=head->next;
delete temp;

}
void insertathead(node * &head ,int val){
    node *n = new node(val);
    if(head==NULL){
     head =n;
     return;   
    }
    n->next=head;
    head=n;

}

bool check(node* head , int val){
    node *temp = head;
    while(temp!=NULL){
if(temp->data == val){
return true;
}
temp=temp->next;
    }
    return false;

}

void nthnodefromlinkedlist(node * head,int k){
node *slow=head;
node *fast =head;
for(int i = 0;i<k;i++){
fast = fast->next;
}
while(fast != NULL){
    fast = fast->next;
    slow=slow->next;

}
cout<<slow->data;
}

void reverseallnodes(node * &head){
    node *prevptr=NULL;
    node*nextptr;
    node *curptr = head;
    while(curptr != NULL){
nextptr=curptr->next;
curptr->next=prevptr;
prevptr=curptr;
curptr=nextptr;
    }
    head =prevptr;

} 

// head is a pointer of node type ..

void delnode(node * &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
node* temp = head;
while(temp->next->data != val){
    temp=temp->next;
}
node * del = temp->next;
temp->next=temp->next->next;
delete del;
}


node* reverselinkedlistrecursion( node * &head ){
    
if( head== NULL ||  head->next == NULL){
    
return head ;
}

node * newhead=reverselinkedlistrecursion(head->next);
head->next->next=head;

head->next=NULL;
return newhead;



}
bool checkingcyclelinkedlist(node * head){
    node * slow = head;
    node *fast = head;
    while( fast!=NULL && fast->next != NULL  ){
        fast=fast->next->next;
        slow=slow->next; 
        if(fast==slow){
            return true
            ;
        }
    }
return false;

}
void make_loop(node * &head,int pos){

    node * point= head;
    node * pospointer =NULL;
    int count =1;
    while(point->next!=NULL){
   if(count == pos){
       pospointer=point;
   }
   point =point->next;
   count++;
    }
    point->next=pospointer;


}



// ############

void removalofcyclelinkedlist(node *head){

    node *slow = head;
    node *fast = head;
    
fast =head;
 

while(fast->next != slow->next   ){

    slow=slow->next;
    fast = fast->next;

}
slow->next=NULL;


}


// ################  ######### # ## # # # ######

void insertatheadindoublelinkedlist(node * &head,int val){
node * insert = new node(val);
if(head==NULL){
    head=insert;
    insert->next=insert;
    return ;

}
node * temp = head;
while(temp->next!=head){
    temp=temp->next;
}
temp->next=insert;
temp = head;
head =insert;
insert->next= temp;

}

void insertattailindoublelinkedlist(node *&head,int val){
node *insert=new node(val);
    if(head==NULL){
head = insert;
insert->next = insert;
return;
    }
node * temp = head;
node *puttinghead=NULL;
while(temp->next!=head){

temp=temp->next;
} 
    puttinghead=temp->next;
temp->next=insert;
insert->next=puttinghead;

}
void displaydoublycircularll(node * head){
node * temp =head;
while(temp->next != head){
cout<<temp->data<<endl;
temp = temp->next;
}
cout<<temp->data<<endl;

}




void deleteatheadincircularll(node * &head){
    node * temp =head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = temp->next->next;
    node * todel = head;
    head=temp->next;
    delete todel;
}




void removingcircularlinkedlist_at_position(node * &head,int pos){
    if(pos==1){
        deleteatheadincircularll(head);
        return;
    }
    node *temp = head;
    int count =1;
   while(count == pos-1){
       temp=temp->next;
       count++;
   }
   node *del=temp->next;
temp->next = temp->next->next;
delete del;

}

int lengthoflinkedlist(node * head){
int count =0;
while(head !=NULL){

    count+=1;
    head=head->next;


}
return count;

}
int Find_Intersection_Of_linkedList(node * &head1,node * &head2){
    int l1 = lengthoflinkedlist(head1);
    int l2 = lengthoflinkedlist(head2);
    int d;
    node *big;
    node * small;
    if(l1>l2){
        d = l1-l2;
        big = head1;
        small=head2;
    }
    else{
        d = l2-l1;
        big = head2;
        small = head1;
    }
    while(d!=0){

        // ydi koi 2 linked list ma sa ek hi linked list hai

        if(big==NULL){

            return -1;

        }

        big=big->next;
       
        d-=1;
    }
// 2 linked list hai to lekin koi bhi intersect nhi kr rhi hai 
    while(small!=NULL && big!=NULL){
if(small==big){
    return big->data;
}
        small=small->next;
        big=big->next;
    }
    return -1;

}


int main(){
node *head =NULL;
insert_tail(head,1);
insert_tail(head,2);
insert_tail(head,3);
insert_tail(head,4);
insert_tail(head,5);
insert_tail(head,6);



// make_loop(head,3);
// insertattailindoublelinkedlist(head,1);
// insertattailindoublelinkedlist(head,1);
// insertattailindoublelinkedlist(head,2);
// displaydoublycircularll(head);

// display(head);




// cout<<check(head,3);
    return 0;
}
// sice head is by reference is taken so that means when our recursion will reach to base case then head will contain the address of last node 








