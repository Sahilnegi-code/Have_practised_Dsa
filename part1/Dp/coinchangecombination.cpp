#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    int amt;
    cin>>amt;

    int dp[amt+1];
    for(int i =1;i<=amt;i++){
        dp[i]=0;
    }
    dp[0]=1;
    for(int i =0;i<n;i++){
        for(int j = coin[i];j<=amt;j++){
            dp[j]=dp[j]+dp[j-coin[i]];
        }
    }
  cout<<dp[amt];
    return 0;
}