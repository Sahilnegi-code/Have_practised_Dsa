#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int idx ,int sum,int ans ,int size){
    if(sum>ans){
return 0;
    }
 if(idx==size){
     if(sum==ans){
        return 1;
    }
else{
    return 0;
}

 }
    


    int get = count(arr,idx+1,sum+arr[idx],ans,size) + count(arr,idx+1,sum,ans,size);
    return get;
}
int main(){
    int arr[]={1,2,3,4,2};
    int ans = 4;
    cout<<count(arr,0,0,ans,5);
    return 0;
}
// 2,2
// 3,1
// 4