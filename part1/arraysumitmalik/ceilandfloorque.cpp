#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<"find which no-";
    int no;
    cin>>no;
    
    int sm=0;
    int ceil=0;
    int floor=0;

    int bg = 2;
    while(sm<=bg){
int mid = (sm+bg)/2;
if(arr[mid]>no){
    bg =mid-1;
    ceil=arr[mid];

}
else if(arr[mid]<no) {
    sm=mid+1;
    floor=arr[mid];
}
else{
    ceil = mid;
    floor =mid;
    break;
    
}
    }
cout<<"floor:"<<floor<<endl;
cout<<"ceil:"<<ceil;

    return 0; 
}