// constructor is memmber function of class
// the name of constructor  is same as the no of class
// it has no return type  so can't use return keyword
// it must be an instance member function that is it can never be static
// constructor is implicitly invoked when an object is created.
// constructor is used to solve problem of initialization 
#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    Complex(){
cout<<"hello constructor"<<endl;
    } 
};

int main(){
    Complex c1,c2,c3;

    return 0;
}
