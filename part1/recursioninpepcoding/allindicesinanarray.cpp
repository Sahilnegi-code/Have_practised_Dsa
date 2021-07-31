
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int* display(int[],int,int,int,int);

int* display(int arr[],int idx,int size, int no,int fsf){
    // string k = to_string()
    if(size == idx){
        // int newarray[fsf];
        return new int[fsf];
    }
if(arr[idx]==no){

    int *arr1 = display( arr, idx+1, size, no, fsf);
    arr1[fsf]=idx;
    return arr1;
}
else{
    int *arr1 = display( arr, idx+1, size, no, fsf);
    return arr1;
}


}

int main(){
    // string k = to
    int arr[]={10,20,30,10,10};
 
    int *p=display(arr,0,5,10,0);
    // int size = 
    for(int i=0;i<3;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}