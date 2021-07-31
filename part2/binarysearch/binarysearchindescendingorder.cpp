
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={7,6,5,4,3,2,1};
int i =0;
int j =6;
int find =3;
while(i<=j){
    int mid =(i+j)/2;
    if(arr[mid]<find){
        j =mid+1;
    }
    else if(arr[mid]>find){
        i = mid-1;
    }
    else{
       cout<<mid;
       break;
    }
}

    return 0;
}