#include<iostream>
using namespace std;
int main(){
cout<<"which base"<<endl;
int base;
cin>>base;
cout<<"which no-"<<endl;
int no;
cin>>no;
int mult=1;
int rem ;
int digit =0;
while(no!=0){
    rem = no%10;
    int a =mult*rem;
    digit=digit+a;
    mult=mult*base;
    no=no/10;

}
cout<<"in decimal the no is -"<<endl;
cout<<digit;

    return 0;
}