#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int arr[3][3]={
        {1,1,0},
        {0,0,0},
        {0,1,0 }


    };
    stack<int > st;
    for(int i =0;i<3;i++){
        st.push(i);
    }
    while(st.size()>=2){
        int i = st.top();
        st.pop();
        int j = st.top();
        st.pop();
        if(arr[i][j]==1){
            st.push(j);

        }
        else{
            st.push(i);
        }

    }
    int pos =st.top();
        for(int i =0;i<3;i++){
        if(i!=pos){
            if(arr[i][pos]==0 || arr [pos][i]==1){
                cout<<"none";
               return; 

            }
        }
    }
    cout<<pos;
    return 0;
}