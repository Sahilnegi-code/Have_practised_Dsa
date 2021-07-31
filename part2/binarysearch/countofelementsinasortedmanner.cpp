
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={7,6,5,2,2,2,1};
    int fo;
    // first occurence/
int i =0;
int j =6;
int find =2;
while(i<=j){
    int mid =(i+j)/2;
    if(arr[mid]<find){
        j =mid-1;
        
    }
    else if(arr[mid]>find){
        i = mid+1;
    }
    else{
        
       fo = mid;
       j= mid-1;
    }
}

    int lo; 
    // last occurence
 i =0;
 j =6;
while(i<=j){
    int mid =(i+j)/2;
    if(arr[mid]<find){
        j =mid-1;
        
    }
    else if(arr[mid]>find){
        i = mid+1;
    }
    else{
        
       lo = mid;
       i= mid+1;
    }
}
cout<<lo-fo+1<<endl;



    return 0;
}