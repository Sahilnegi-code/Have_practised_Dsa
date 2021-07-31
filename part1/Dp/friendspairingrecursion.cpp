#include<bits/stdc++.h>
using namespace std;

int main(){
    int friendcount =3;
int dp[friendcount+1];
 dp[0]=0;
 dp[1]=1;
 for(int i =2;i<=friendcount;i++){
     dp[i] =dp[i-1]+(i-1)*dp[i-2];
 }

cout<<dp[friendcount];
    return 0;
}