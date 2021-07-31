#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define n 200
class queue{
   int * arr;
   int front;
   int back; 
   public:
   queue(){
       arr= new int [n];
       front=-1;
       back=-1;

   }
   void push(int x){
       if(front==-1){
           front++;
       }
       if(back==n-1){
           cout<<"Queue overflow";
           return ;
           }

       back++;
       arr[back]=x;


   }

void pop(){
    if(front==-1 || front>back){
        cout<<"nothing to pop";
        return ;
    }
    front++;
}
   int  peek(){
       if(front==-1 || front>back){
           cout<<"no elements in queue";
           return -1;
           }
          return arr[front]; 

   }
   

   bool empty(){
       if(front==-1 || front>back){

        //    cout<<"no elements in queue";
        //    return -1;
        return true ;

           }
return false;
   }

};
  int main(){

    return 0;
}