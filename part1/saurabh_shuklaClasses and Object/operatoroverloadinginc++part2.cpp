#include<iostream>
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
cout<<"a:"<< a<<endl<<"b:"<<b<<endl;

}
// caller object always left in binary operator
Complex operator-(){
    Complex temp;
temp.a =-a;
temp.b =-b;
return temp;
} 
};
int main(){
Complex c1 ,c2;
c1.setdata(2,8);
c2=-c1;
c2.getData();
    return 0;
}