#include<iostream> 
// insertion sort is better bubble sort and selection sort.
// hmasha o(n^2) chlta hai in bubble sort nad selection sort mai  
// if sorted array is present then works in o(n)

using namespace std;
int arrlen(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    return size;
} 
int main(){
    int arr[]={10,68,123,1,24,42};
    
    for(int i=1; i<=5;i++){
        for(int j =i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else{
                break;

            }
        }
    }
    for(int i=0;i<6;i++){
cout<<arr[i]<<endl;

    }
    return 0;
}