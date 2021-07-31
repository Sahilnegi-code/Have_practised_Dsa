#include<iostream>
using namespace std;
class B;
class A{
int a;
public:
friend void fun(A,B);
void setdata(int a){
this->a =a ;
}

};
class B{
int b;
public:
friend void fun(A,B);
void setdata(int b){
this->b =b ;
}

};
void fun(A o1,B o2){
cout<<"sum is "<<o1.a+o2.b;
}
int main(){
A obj1;
B obj2;
obj1.setdata(3);
obj2.setdata(5);
fun(obj1,obj2);
    return 0;
}