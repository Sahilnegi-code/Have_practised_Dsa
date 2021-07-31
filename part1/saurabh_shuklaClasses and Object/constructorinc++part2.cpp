// constructor is memmber function of class
// the name of constructor  is same as the no of class
// it has no return type  so can't use return keyword
// it must be an instance member function that is it can never be static
// constructor is implicitly invoked when an object is created.
// constructor is used to solve problem of initialization 
#include<iostream>
using namespace std;
class Complex{
    public:
    
    int a,b;
    void show(){
        cout<<a<<endl;
        cout<<b<<endl;

    }
    Complex(){
        a=0;     /*defalut constructor*/
        b=0;
    }
    Complex(int x ,int y){
a=x;                   /*parameterized constructor*/
b=y;
    } 
//     Complex(int z){
//         a=z;
//     }
Complex(Complex &c ){
    a=c.a;
    b=c.b;
}
};

// agar object bnaga to constructor call hoga hi hoga


int main(){
   Complex c1(3,5);
//    it can be written as Complex c1 = Complex(3,4),Complex c2 = Complex(5),Complex c3 = Complex()
// for one argument ---> Complex c4 =4;
c1.show();
Complex c4=c1;// Complex c4(c1);

    return 0;
}
