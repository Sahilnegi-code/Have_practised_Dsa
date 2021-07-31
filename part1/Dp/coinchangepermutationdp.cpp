#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int tar;
cin>>tar;
int dp[tar+1];
dp[0]=1;
for(int i=1;i<=tar;i++){
    dp[i]=0;
}
for(int i =1;i<=tar;i++){
    for(int j =0;j<n;j++){
        if(i>=arr[j]){
        dp[i]=dp[i]+dp[i-arr[j]];

        }
    }
}
cout<<dp[tar];
    return 0;
}