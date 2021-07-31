#include<iostream>
using namespace std;
int main(){
int wt[]={2,5,1,3,4};
int val[]={15,14,10,45,30};
int limit =5;

int dp[limit+1];

dp[0]=0;
for(int i=1;i<=5;i++){
    int max =0;
   

for(int j =0;j<5;j++){
    if(i>=wt[j]){
        int diff = i-wt[j];
        if(val[j]+dp[diff]>max){
    //   cout<<max<<endl;
            max = val[j]+dp[diff];
        }
    }
}

dp[i]=max;
// cout<<dp[i]<<endl;
}
cout<<dp[limit];



    return 0;

}