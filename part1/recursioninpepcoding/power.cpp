#include<iostream>
using namespace std;
int power (int x ,int n){
if(n==1){
return 2;
}
    
    return (x *power(x,n-1));
}
int main(){
    int x = power(2,3);
    cout<<x;

    return 0;
}