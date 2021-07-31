#include<iostream>
#include<bits/stdc++.h>

using namespace std;
long long  int min( long long int a, long long  int b){
    return a<b?a:b;
}
long long int mincoins(int arr[],int tar,int idx,int arridx){
    if(tar==0){
        return 0; 
    }
    if(tar<arr[idx]){
        return INT_MAX;
    }
    if(idx==arridx){
       return INT_MAX;
    }

long long int include = 1+mincoins(arr,tar-arr[idx],idx,arridx);
long long  int exclude = mincoins(arr,tar,idx+1,arridx);
return min(include,exclude);
}
int main(){
    int arr[] = {2,1,3,4};
    int tar =4;
    int idx =0;
    int arridx =4;
    cout<<mincoins(arr,tar,idx,arridx);
   return 0;
}