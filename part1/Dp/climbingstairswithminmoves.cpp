#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[n+1];
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dp[n]=0;
    for(int i =0;i<=n-1;i++){
        dp[i]=0;
    }
    for(int i =n-1;i>=0;i--){
            long long int min = LLONG_MAX;
        for(int j =1;j<=arr[i]&& i+j<=n;j++){
            long long int chck = dp[i+j] ;

 
            if(min>chck){
                min = chck;

            }
        }
        dp[i]= min +1;

    }
    cout<<dp[0];
    return 0;
}