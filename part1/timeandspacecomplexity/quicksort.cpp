#include<iostream>
using namespace std;
void swa(int arr[],int i ,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int low,int high,int arr_size){
    int i =low;
    int j = low;
    int pivot = arr[high];
    while(i<=high){
        if(arr[i]<=pivot){
            swa(arr,i,j);
            // cout<<i<<" "<<j<<" 1"<<endl;
            i++;
            j++;
        }
        else{
            // cout<<i<<" "<<j<<"  2"<<endl;
            i++;
        }
    }

    return j-1;
}


void quicksort(int arr[],int low ,int high ,int arr_size){
    if(low>=high){
        
        return;
    }
    // cout<<low<<" "<<high<<endl;
    int pindex = partition(arr,low,high,arr_size);
    
    quicksort(arr,low,pindex-1,arr_size);
    quicksort(arr, pindex+1 ,high,arr_size);
}

int main(){

int arr[5]={20,4,23,7,19};
int size = sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,size-1,size);
//  cout<<partition( arr,0,4,5)<<endl;

for(int i =0;i<5;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}