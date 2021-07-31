#include<iostream>
#include<cstring>
using namespace std;
int dp[4];
int maxsumofnonadjacentelement(int arr[] , int i , int dp[]){
    if(i==0){
return arr[i];
    }
    if(i<0){
        return 0;
    }
    if(dp[i]!=0){
        return dp[i];
    }

int sum1 = arr[i] + maxsumofnonadjacentelement(arr , i-2);

int sum2 = maxsumofnonadjacentelement(arr,i-1); 

return dp[i]= max(sum1,sum2);

}
int main(){
int arr[]={1,2,3,5};
memset(dp,0,sizeof(dp));
maxsumofnonadjacentelement(arr,3,dp);
for(int i =0;i<4;i++){
    cout<<dp[i]<<endl;
}
    return 0;
}