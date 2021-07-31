#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cout<<"arary-"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int max =a[0];
int min = a[0];
for(int j=1;j<n;j++){
    if(a[j]>max){
        max=a[j];
        }
        if(min>a[j]){
            min=a[j];
        }
}
int diff= max-min;
cout<<"diff is "<<diff;


    return 0;
}