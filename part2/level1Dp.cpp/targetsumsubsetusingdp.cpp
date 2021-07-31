#include<iostream>
#include<cstring>

using namespace std;
 const int arraylength =4;
   const int sum =4;
int dp[arraylength][sum+1];
bool targetsumsubset(int arr[],int i ,int sum ,int arrLength ){
  
   if(sum<0){
       return false;
   }
   if(sum==0){
      
       return true;
   }
   if(i==arrLength && sum != 0 ){
       return false;
   }
    if(dp[i][arrLength] != -1) {
        return dp[i][arraylength];
    } 

bool include = targetsumsubset(arr,i+1,sum-arr[i],arrLength);
if(include==1){
    return true;
}
bool exclude = targetsumsubset(arr,i+1,sum,arrLength);

if(exclude==1){
    return true;
}
return dp[i][arraylength]=false;
}
int main(){

  
memset(dp,-1,sizeof(dp));

int arr[]={5,2,2,1};
cout<<targetsumsubset(arr,0,sum,arraylength);
    return 0;
}






