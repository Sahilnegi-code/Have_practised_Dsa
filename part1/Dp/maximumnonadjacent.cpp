#include<iostream>
using namespace std;

int main(){
int arr[]={10,20,30,40};
int ib=arr[0];
int eb=0;
int ia;
int ea;
for(int i =1;i<4;i++){
ia=eb+arr[i];
ea=ib>eb?ib:eb;
eb=ea;
ib=ia;

}
int ans=(eb>ib?eb:ib);
cout<<ans;

    return 0;
}