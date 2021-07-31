// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={1,2,3,4,5,6,7,8};
int i =0;
int j =7;
int find =4;
while(i<=j){
    int mid =(i+j)/2;
    if(arr[mid]<find){
        i =mid+1;
    }
    else if(arr[mid]>find){
        j = mid-1;
    }
    else{
       cout<<mid;
       break;
    }
}

    return 0;
}