#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"lenght-";
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++){
        cin>>arr[i];

    }
    for(int i =0;i<l;i++){
        int v = arr[i];
        arr[v]=i;
    }
    for(int i=0;i<l;i++){
        cout<<arr[i]<<endl;

    }
    return 0;

}
