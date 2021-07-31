#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int arr[]={1,2,3,5,1};
    int nge[5];
    st.push(0);
    for(int i =1;i<5;i++){
        while(st.size()>0 && arr[st.top()]<arr[i]){
            int pos = st.top();
            nge[st.top()]=arr[i];
            st.pop();
            }
            st.push(i);
    
    
    }
    while(st.size()!=0){
        int pos = st.top();
        nge[pos]=-1;
        st.pop();

    }

    return 0;
}