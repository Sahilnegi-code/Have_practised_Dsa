// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
 using namespace std;
 class que{
     stack<int>st1;
     stack<int> st2;
     public:
     void push(int x){
         st1.push(x);
         
     }
     void pop(){
         if(st2.empty()==0  && st1.empty()==0){
             cout<<" nothing to pop ";
             return;
         }
         if(st2.empty()){

         while(st1.empty()!=0){
             st2.push(st1.top());
             st1.pop();
         }

     }
         st2.pop();
     }

     bool empty(){
         if(st1.empty() && st2.empty()){
             return true;
         }
         return false;
     }

     int top(){
         if(st2.size()==0   ){
             
         while(st1.size()>0){
             st2.push(st1.top());
             st1.pop();
         }
             
         }
        
            //  cout<<"nothing to pop";
         if(st1.size()==0 && st2.size()==0){
            return -1;
         }
         else if(st2.empty()){
             return st1.top();
         }
         else{
             return st2.top();
         }

        

}




 };



int main() {
    // Write C++ code here
    que q;
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;


    return 0;
}