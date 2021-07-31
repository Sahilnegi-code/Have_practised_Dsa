#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}
int main(){
    int arr[]={
        5,10,8,3
    };
    int no = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    // 0 to j-1  : --> <=pivot
    // j to i-1 : --> >pivot
    // i to end    :-->unknown 

int i =0;
int j=0;
while(i<size){
if(arr[i]>no){
    i++;
}
else{
    swap(arr,i,j);
    i++;
    j++;
}
}
for(int i =0;i<size;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}