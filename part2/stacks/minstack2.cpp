#include<iostream>
#include<stack>
using namespace std;
class minstack{
    stack <int> st;
    int min ;
   
    public:
  

    void push(int x){

       if(st.size()==0){
           min = x;
           st.push(x);
           }
           if(x<min){
               min = x; 
               st.push(x+(x-min));
           }
           st.push(x);
           }

           int min(){
               if(st.size()==0){
                   cout<<"stack underflow";
                   return -1;
               }

               return min ;
           }
           int size(){
               if(st.size()==0){
                   cout<<"stack underflow";
                   return -1;
               }
               return st.size();

           }
           int top(){
               if(st.size()==0){
                   cout<<"stack underflow";
                   return -1;
               }
               if(st.top()<min){
                   return min;
               }
               else{
                   return st.top();
               }


             



           }

           int pop(){
               if(st.size()==0){
                   return -1;
               }
                   int val = st.top();
               if(  st.top()<min  ){
                   st.pop();
                   int beforemin = min; 
                   min = 2*min-val;
                   return beforemin;

               }
               else{
               st.pop();
               return val;

               }
               



           }



};
signed main()
{




    


    return 0;
}