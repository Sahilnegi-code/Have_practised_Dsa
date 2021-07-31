// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
 using namespace std;
 class Stack{
     int N;
queue <int> q1;
queue <int> q2;
public:
Stack(){
   N=0;
}
void push(int x){
    q2.push(x);
    N++;
}
void pop(){
    if(q2.size()==0){
        cout<<"error";
        return;
    }

        while(q2.size()>1){
        q1.push(q2.front());
        q2.pop();
    }
    q2.pop();
    queue<int> temp;
    q2=q1;
    q1=temp;
    N--;
}
  int size(){
      if(q2.empty()){
          return 0;

      }
      return N;

  }
  int top(){
      if(q2.empty()){
          return -1;

      }
      while(q2.size()>1){
          q1.push(q2.front());
          q2.pop();
          }
          int top = q2.front();
          q1.push(top);
          queue<int> temp;
          q2=q1;
          q1=temp;
          return top;
  }




 };
 int main(){
     Stack s1;
     s1.push(1);
     s1.push(2);
     s1.push(3);
     s1.push(4);
     cout<<s1.top();
     cout<<s1.size();
    //  cout<<s1.size();
s1.pop();
     cout<<s1.top();
     return 0;
 }