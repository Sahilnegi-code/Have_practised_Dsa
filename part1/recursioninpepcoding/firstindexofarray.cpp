
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int firstindex(int arr[],int idx ,int find ){
    int size= sizeof(arr)/sizeof(arr[0]);
   if(idx==size){
       return -1;
   }

int getidx = firstindex(arr,idx+1,find);
if(find == arr[idx]){
    if(idx<getidx){
return idx;
    }
}
else {
return getidx;
}
}
int main(){
    int arr[]={29,10 ,46 , 59 ,10 };
    cout<<firstindex(arr,0,10 );
    return 0; 
}