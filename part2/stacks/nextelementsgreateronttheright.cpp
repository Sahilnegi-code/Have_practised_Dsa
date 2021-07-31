#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int arr[]={1,2,3,5,8};
    int nge[5];
    nge[4]=-1;
    st.push(arr[4]);
    for(int i =3;i>=0;i--){
       while(arr[i]>=st.top() && st.size()>0){
           st.pop();

       }
       if(st.size()==0){
           nge[i]=-1;

       } 
       else{
nge[i]=st.top();
st.push(arr[i]);

       }

}
for(int i =0;i<5;i++){
    cout<<nge[i]<<endl;
}



    return 0;
}