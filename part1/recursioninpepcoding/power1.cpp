#include<iostream>
using namespace std;
int power (int x ,int n){
if(n==1){
return 2;
}
int val = power(x,n/2);
 val =val*val;
if(n%2==1){
val = val*x;
}
    
    return val;
}
int main(){
    int x = power(2,3);
    cout<<x;

    return 0;
}
