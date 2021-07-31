
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int firstindex(int arr[],int idx ,int find ){
    int size= sizeof(arr)/sizeof(arr[0]);
   if(arr[idx]==find){
       return idx;
   }
   if(size==idx){
       return -1;   }

int getidx = firstindex(arr,idx+1,find);
return getidx;
}
int main(){
    int arr[]={29,8 ,48 , 58 ,8 };
    cout<<firstindex(arr,0,48 );
    return 0; 
}