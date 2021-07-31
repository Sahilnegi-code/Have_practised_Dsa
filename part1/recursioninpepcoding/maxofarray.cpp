#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    
    int li = (sizeof(arr)/sizeof(arr[0]));
    
if((li-1)==n){
    return arr[n];
}

int k =max(arr,n+1);

if(arr[n]>k){
return  arr[n];
}
else{
 return k; 
}

} 
int main(){
int arr[]={10,60,30,40,50};
cout<<max(arr,0);
    return 0;
}