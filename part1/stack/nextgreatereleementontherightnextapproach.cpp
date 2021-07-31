#include<iostream>
#include<stack>

using namespace std;
int main(){
    int arr[]={12,13,53,15};

    stack <int> st;
    int p[4];
    st.push(0);
    for(int i =1;i<4;i++){
        while(st.size()>0 && arr[st.top()]<arr[i] ){
            int pos =st.top();
            p[pos]=arr[i];
            
            st.pop();

            }
            st.push(i);
    }

    while(st.size()>0){
int pos = st.top();
    p[pos] = -1;
     st.pop();
} 

for(int i=0;i<4;i++){
        cout<<p[i]<<endl;
}

return 0;
}