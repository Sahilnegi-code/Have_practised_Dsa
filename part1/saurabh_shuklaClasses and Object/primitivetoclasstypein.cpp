#include<iostream>
using namespace std;
class Complex{
    private:
     int a,b;
     public:
     Complex(int a){
         this->a=a;
         b=0;
     }
// ########## default constructor######     
     Complex(){

     }
// ########## default constructor######
     void setData(int a, int b){

         this->a=a;
         this->b=b; 
     }
     void showData(){
         cout<<a<<"+ i"<<b<<endl;
     }
};
// ################ primitive type to class type ##################
// primitive type to class type can implemented through constructor
int main(){
    // int,char,float,double are primitive data type
    // automatic type conversion
    // primitive to primitive --> automatic type conversion
    // primitive to class type
Complex c1;
int x =5;
// c1=x; 
// c1=x; c1 ka lia ek constructor call hua jisma ek parameter wala usma x wala argument pass hua hoga


c1.showData();

    return 0;
}