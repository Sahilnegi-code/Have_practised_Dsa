#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int main(){
string str;
cin>>str;
stack <char> st;
for(int i=0;i<str.length();i++){
    char ch = str.at(i);
    if(ch==')'){
if(st.top()=='('){
cout<<"true";
return 0;
}

else{
    while(st.top()!='('){
st.pop();
    }
    st.pop();

}
    }
    else{
        st.push(ch);
    }

}

cout<<"false";
    return 0;
}