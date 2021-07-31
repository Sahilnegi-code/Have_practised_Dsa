    #include<iostream>
    #include<bits/stdc++.h>
    #include<stack>
    using namespace std;
    int main(){
        stack <int> st;
        int arr[]={10,2,3,4,1,6};
        int nge[6];
        nge[5]=6;
        int window = 4;

  st.push(5);

    for(int i =4;i>=0;i--){
        while(st.size()>0 && arr[i]>=arr[st.top()] ){
            st.pop();
        }
        if(st.size()==0){
            nge[i]=6;
        }
        else{
            nge[i]=arr[st.top()];

        }
        st.push(i);






    }
    int j; 
for(int i =0;i<=6-window;i++ ){
    j=i;
while(nge[j]<=i+window-1){
    j=nge[j]; 
    
}
cout<< arr[j]<<endl;
}

        return 0;

    }