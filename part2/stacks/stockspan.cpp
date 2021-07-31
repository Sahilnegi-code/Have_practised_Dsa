#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int arr[]={1,2,3,5,1};
    int span[5];
    span[0]=1;
    st.push(arr[0]);
    for(int i =1;i<5;i++){
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        if(st.size()==0){
            span[i]=i+1;
        }
        else{
            span[i]=st.top()-arr[i];
        }
        st.push(arr[i]);
    }

    for(int i =0;i<5;i++){
    cout<<span[i]<<endl;
}

    return 0;
}