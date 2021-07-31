#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    int his[]={2,4,5,6,10,3,7};
    int nser[7];
    nser[6]=-1;
    st.push(6);

    for(int i =5;i>=0;i--){
        while(   st.size()>0 &&  his[st.top()]>=his[i]){
            st.pop();

        }
        if(st.size()==0){
          nser[i]=-1;
        }
        else{
           nser[i]=st.top(); 
     }
        st.push(i);

    }
   
   
    stack<int> st1;

    int nsel[7];

st1.push(0);

nsel[0]=-1;

for(int i =1;i<7;i++){
    while(st1.size()>0 && his[st1.top()]>= his[i]){
        st1.pop();
    }
    if(st1.size()==0){
        nsel[i] = -1 ;
        
}
    else{

        nsel[i]=st1.top();
    }
    st1.push(i);
    
    }


    for(int i =0;i<7;i++){
        cout<<nser[i]<<endl;
        
    }
    return 0;
}

