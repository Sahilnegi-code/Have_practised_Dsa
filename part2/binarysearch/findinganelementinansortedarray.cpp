#include <iostream>
using namespace std;
int binarysearch(int arr[],int li,int find){
    int low =0;
    int high =li;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==find){
            return mid;
        }
        else if(arr[mid]>find){
            high =mid-1;
                }
                else{
                    low=mid+1;
                }
    }
    return -1;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int find =2;
    int low =0;
    int high =1;
    while(arr[high]>find ){
    high = 2*high;
    }

    cout<<binarysearch(arr,high,find);
    return 0;
}
