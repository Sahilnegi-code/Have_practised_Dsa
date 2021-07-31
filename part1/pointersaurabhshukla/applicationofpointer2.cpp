#include<iostream>
using namespace std;
int main(){
// array always consumes memory in contiguous fashion.
int a[5];
int *p;
p=a;
for(int i =0;i<5;i++){
    cin>>*(p+i);
}
for(int i=0;i<5;i++){
    cout<<*(p+i);
} 

    return 0;
}