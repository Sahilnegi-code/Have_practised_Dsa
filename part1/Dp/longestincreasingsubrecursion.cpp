#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return (a>b?a:b);
}
int lis(int arr[],int arrindes ,int check,int idx){
    
if(arrindes==idx){
    return 0;
} 
int include=0 ;
if(check==-1 || arr[idx]>arr[check]){
   

    include = 1+ lis(arr,arrindes, idx,idx+1);

}

        int exclude = lis(arr,arrindes,check,idx+1) ;

return max(include,exclude);


 
}
int main()
{
    int arr[]={10,1,23,34};
    int arrindex=4;
    int check =-1;
    int idx =0;
    cout<<lis(arr,arrindex,check,idx);

    return 0;
}