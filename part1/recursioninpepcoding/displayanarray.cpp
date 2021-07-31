#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
    if(n==1){
        cout<<arr[0]<<endl;
        return;
    }
fun(arr,n-1);
cout<<arr[n-1]<<endl;


}
int main(){
    int arr[]={10,20,30,40,50};
    fun(arr,5);

    return 0;
}