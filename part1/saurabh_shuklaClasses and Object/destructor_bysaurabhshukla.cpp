#include<iostream>
using namespace std;
int count =0;

class num{
public:
num(){
count ++;
cout<<"count->"<<count<<endl;

}
~num(){
    cout<<"ending->"<<count<<endl;
    count--;
}
};
// class Complex{
//     private: 
//     int a,b;
//     public:
//     ~Complex(){
//         cout<<"destructor";
//     }
// };
// void fun(){
//     Complex obj; 
//     }
int main(){
    // destructor is an instance member function of class
    // Destructor can never be static
    // destructor hasno return type
    //it is invoked implicitly when object is going to destroy
    // It should be defined to release resources allocated to an object 
    // fun();
cout<<"inside main  fun"<<endl;
num n1;
{
  cout<<"enter"<<endl;
    num n3,n2;
    cout<<"return->"<<endl;
}
cout<<"backtomain";
    return 0;
}