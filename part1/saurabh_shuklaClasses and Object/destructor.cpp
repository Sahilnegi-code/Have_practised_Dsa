#include<iostream>
using namespace std;

// Destructor is an instance member function of class
// the name of destructor is same as the name of class but preceded by the tilde ( ~  )
// symbol
// Destructor can be never be static 
// Destrucor has no return type 
// Destructor takes no argument(no overloading is possible)
// It is invoked implicitly when object is going to destroy.
//  object jb destroy hona wala hota hai usssa pehle chla wala destuctor fun hota hai
class Complex{
    private:
    int a,b;
    public:
    ~Complex(){
cout<<"hello world";
    }

};  
void fun(){
    complex obj;
}


int main(){
fun();
    return 0;
}