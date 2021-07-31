#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str = "ddidi";
    stack<int> st;

    int count = 1;
    for(int i =0;i<str.length();i++){
        
        if(str[i] == 'd'){
            st.push(count);
            count= count + 1;
            }
        else{

            st.push(count);
            count = count +1;
            while(st.size()>0){
                cout<<st.top();
                st.pop();
                }


        }

    }
    st.push(count);
    while(st.size()>0){
        
        cout<<st.top();
        st.pop();

            }
    return 0;
}