#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
// int lastindexofarray(int [],int ,int,int );
int lastindexofarray(int arr[],int idx,int no,int size){
    
if(size==idx){
return -1;
}
    int li =lastindexofarray(arr,idx+1,no,size);
     if(arr[idx]==no && li ==-1){
 
        return idx;
    }
    else if(li!=-1 ){
        return li;
    }
    else if(li ==-1 && arr[idx] != no ){
        return -1;
    }
      

}
int main(){
int arr[]={10,20,30,30,50};
cout<<lastindexofarray(arr,0,30,5);


    return 0;
}