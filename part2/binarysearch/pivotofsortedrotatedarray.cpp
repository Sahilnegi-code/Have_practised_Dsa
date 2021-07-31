#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,6,7,1,2,3,4};
    int low =0;
    int high =6;
    while(low<high){
        int mid = (low + high )/2;
        if(arr[mid]<arr[high]){
            high = mid;
            }
            else{
                low = mid+1;
            }

    }
    cout<<low<<endl;
        return 0;
}