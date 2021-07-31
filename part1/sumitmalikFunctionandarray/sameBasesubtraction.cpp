#include<iostream>
using namespace std;
int Addition(int ,int ,int);
int main(){
int no1,no2,base;
cout<<"no1"<<endl;
cin>>no1;
cout<<"no2"<<endl;
cin>>no2;
cout<<"base";
cin>>base;
cout<<Addition(no1,no2,base);

    return 0;
}
int Addition(int no1,int no2,int base){
int carry =0;
int add,rem1,rem2;
int val =0;
int p,a=1;
int c;

while(no1>0||no2>0||carry>0){
rem1 = no1%10;
rem2=no2%10;

int add = rem1 + rem2 + carry;
p=add%base;
val = val + p*a;
carry=add/base;
a=a*10;

no1=no1/10;
no2=no2/10;

}
return val;

}
 