#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool handleClosing(stack<char> &st,char correschar){
if(st.size()==0){
    cout<<false;
    return false;
}
else if(st.top() != correschar){
cout<<false;
return false;
}
else{
    st.pop();
}
}
int main(){
    stack<char>st;
    string que ="{(a+b)}";
    for(int i =0;i<que.size();i++){
        char ch = que[i];
        if(ch=='(' || ch=='{'|| ch=='['){
            st.push(ch);
            }
        else if(ch==')'){
          bool t =  handleClosing(st,ch);
          if(t==0){
              return 0;
          }
        }
        else if(ch=='}')
        {
              bool t =  handleClosing(st,ch);
          if(t==0){
              return 0;
          }
        }
        else if(ch==']')
        {
              bool t =  handleClosing(st,ch);
          if(t==0){
              return 0;
          }

        }
else{

}

    }

    if(st.size()==0){
        cout<<"true";

    }
    else{
cout<<false;
    }

    return 0;
}