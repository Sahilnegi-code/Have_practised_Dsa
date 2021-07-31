#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[4][4]={
        {1,2,3,4},
        {2,3,4,3},
        {2,3,2,5},
        {2,3,4,2}
    };
    int dp[4][4]={
        {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}
    };
    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            if(i==3 && j==3){
                dp[i][j]=arr[i][j];
            }
            else if(i==3){
                dp[i][j]=arr[i][j]+dp[i][j+1];
            }
            else if(j==3){
                dp[i][j]=arr[i][j]+dp[i+1][j];

            }
            else{
                dp[i][j]=arr[i][j]+min(dp[i][j+1],dp[i+1][j]);
            }

        }
    }

cout<<dp[0][0];
    return 0;
}