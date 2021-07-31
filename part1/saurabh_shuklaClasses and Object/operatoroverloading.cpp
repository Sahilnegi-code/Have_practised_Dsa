#include<iostream>
#include<string>
using namespace std;
class complex{
    int a,b;
    public:
    void showdata(){
        cout<<a<<endl<<b;
    }
    void setdata(int a,int b){
this->a=a;
this->b =b;
    }
    complex operator +(complex c2){
        complex c3;
        c3.a=c2.a+a;
        c3.b= c2.b+b;
        return c3;
    }
    complex operator-(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
    // digit,underscore,aplhabet,dollar
};

int main(){
complex c1,c2,c3;
c1.setdata(3,4);
// c2.setdata(2,4);
// c3= c1.operator+(c2); binary operator ma left operator wala hi caller object
// c3 = c1 + c2;
c2=-c1;
c2 = c1.operator-();
c2.showdata();
// c3.showdata();
    return 0;
}
// when an operator is overloaded with multiple jobs ,it is known as opertor overloading
// it is a way to implement compile time polymorphism
// you cannot overload sizeof and ?:operator
// need two operands is called binary operator 