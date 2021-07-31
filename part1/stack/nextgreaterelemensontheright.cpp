#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack <int> st;
    int nge[7];
    int arr[]={20,34,90,27,21,12,23};
    st.push(arr[7-1]);
    nge[6]=-1;
    for(int i=5;i>=0;i--){
        
            while(  st.size()>0  && arr[i]>=st.top() ){
                st.pop();

            }
            if(st.size()==0){
                nge[i]=-1;
            }else{

               nge[i]=st.top();
               
            }
                st.push(arr[i]);

    }
for(int i =0;i<7;i++){
    cout<<nge[i]<<endl;
}
    return 0;
}