#include<iostream>

#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main(){
   
    

    vector<pair<int,int>> arr ={{1,3}, {2,4}, {5,7}, {6,8}};
    sort(arr.begin(),arr.end());
    // for(int i =0;i<arr.size();i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }
    stack <pair<int,int>> st;
    for(int i =0;i<arr.size();i++){
        // cout<<arr[i].first<<" "<<arr[i].second<<endl;
        if(i==0){
            st.push(arr[i]);
        }
        else{
            pair<int,int> &a=st.top();
            if(a.second<arr[i].first ){
                st.push(arr[i]);
            }
            else{
                a.second=a.second>arr[i].second?a.second:arr[i].second;
            }
        }

    }

    stack<pair<int,int> >stack;
    while(st.size()>0){
        pair<int,int> p =st.top();
              

        st.pop();
        stack.push(p);

    }
    while(stack.size()>0){
        pair<int,int> p =stack.top();
        cout<<p.first << " "<<p.second<<endl;
        stack.pop();

    }


    return 0;
}