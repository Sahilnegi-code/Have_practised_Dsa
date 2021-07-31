#include<iostream>
using namespace std;
// static local variable are by default zero.
// and its lifetime throughout the program
// static member variable
class Account{
private:
int balance; 
// instance member 
// static member variable ek baar bnta hai class ma bhla hai object n bna
// static member variable--> ot belong to the whle class

public:
static float roi; 
void setbalance(int b){
balance =b;
}
static void set_roi(float r){
// balance =r;
    roi =r;
}
};
float  Account:: roi ; 
int main(){
Account a,b;
a.roi=2;
cout<<a.roi<<endl;
b.roi = 5;

// manlo koi object nhi bna
Account::roi = 4;
Account::roi =2;
Account::set_roi(4.4);
float v =3.44;
double g =10;
cout<<g;
// if(g ==v)
// {
//     cout<<"hello";
// }




    return 0;
}