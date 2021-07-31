#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int a, b;
    public:
void setdata(int a ,int b){
    this->a =a;
    this->b = b;

}
Complex add(Complex c){
    Complex temp;
    temp.a = a +c.a;
    temp.b = b+c.b;
    return temp;
}
Complex operator+(Complex c){
    Complex temp;
    temp.a = a +c.a;
    temp.b = b+c.b;
    return temp;
}
void getData(){
cout<<"a"<< a<<endl<<"b"<<b<<endl;

}
};
// operatoroverloadingis is same as function operator + should be theree and it works when it has same non primitive datatype
// operator overloading cannot be overload typeof ,?:.  
int main(){
    Complex a,c1,c2,c3;
    a.setdata(1,2);
    c1.setdata(2,5);
    // c2 = a.add(c1);
    c2=c1.operator+(a);
    c3=c1+c2;
c3.getData();
    c2.getData();

    return 0;
}