#include<iostream>
using namespace std;
int main(){

    
    int n;
    cout<<"enter no-";
    cin>>n;
    int base;
    cout<<"base";
    cin>>base;
    int i =1;
    int rem;
    int digit=0;
    while(n!=0){
    rem = n%base;
    n=n/10;
    digit = digit+rem*i;
    i = i*10 ;

    }
cout<<"the digit is -";
cout<<digit;

    return 0;
}