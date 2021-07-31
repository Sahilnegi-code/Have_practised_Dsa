
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void dispalyanarray(int arr[],int n){
if(n<0){
    return ;
}
   
   cout<< arr[n]<<endl;
    dispalyanarray(arr,n-1);
} 
int main(){
    int arr []={10,20,30,40,50};
    dispalyanarray(arr,4);
    return 0;
}
