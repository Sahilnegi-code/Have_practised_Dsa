#include<iostream>
using namespace std;
#include<stack>
int main(){
    int arr[]={3,5,2,1,10,20,8};
    stack <int> st;
    int span[7];
    st.push(0);
    span[0]=1;
    for(int i=1;i<7;i++){
    while(st.size()>0 && arr[st.top()]<arr[i]){
        
        st.pop();
    }
    if(st.size()==0){
        span[i]=i+1; 
           }
           else{
               span[i]=i-st.top();
           }
           st.push(i);
    }
    return 0;
}