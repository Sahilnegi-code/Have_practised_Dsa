#include<iostream>
using namespace std;
int main(){
    int arr1;
    int arr2;
    cin>>arr1;
    int a[arr1];
    for(int i=0;i<arr1;i++){
        cin>>a[i];
    }
    cin>>arr2;
    int b[arr2];
    for(int i=0;i<arr2;i++){
        cin>>b[i];
    }
    for(int i =0;i<arr1;i++){
        int sum;
        sum = a[i]+b[i];
        cout<<sum<<endl;
    }
    return 0;
}