#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
 
int main(){
    stack<int> st;
    int his[]={2,1,5};
int nser[3];
nser[2]=-1;
st.push(2);
for(int i =1;i>=0;i--){
    while(st.size()>0 && his[st.top()]>=his[i]){
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


    for(int i =0;i<3;i++){
        cout<<nser[i]<<endl;
    }
    return 0;
}
 