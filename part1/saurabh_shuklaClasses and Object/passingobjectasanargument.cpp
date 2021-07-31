#include<iostream>
using namespace std;

class Complex{
private:
int a;
int b;
public:
void setData(int a,int b){
    this->a=a;
    this->b=b;
}
void setDataBySum(Complex o1 , Complex o2){
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}
void printNo(){
    cout<<"the complex no is-"<<endl<<a <<"+i"<<b<<endl;
}
};
int main(){
    Complex a,b,sum;
    a.setData(1,2);
    a.printNo();
    b.setData(3,4);
    b.printNo();
    sum.setDataBySum(a,b);
    sum.printNo();

    return 0;
}