// in binary search if there is n element then n-1 iteration will go and greater no will go in back in each iteration no binary ma left sa bda wala and right 
#include<iostream> 
using namespace std;
int main(){
    int temp;
    int k=0;
    int arr[5]={1,3,4,0,2};
    for(int i =1;i<=(4);i++){
        for(int j=1 ;j<=4-k;j++){
            if(arr[j-1]>arr[j]){
                temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                }
                
        }
        k++;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}