#include<iostream>
class A{
public:
void f1(){

}
void f2(){

}
};
class B: public A{
    void f1(){

    }
    // method overriding
    void f2(int x){

    }
    // method hiding-->if argument is different.
};




int main(){
    B obj;
    // obj.f1();
    // class B wala chlega
    // obj.f2();

    
    // error-->kyunki fun ka name mil gya hai child mai  to wha parent class ma nhi jayega
    // aur kyunki argument  hai to error deg jo ki hm call kr rha hai usma argument nhi to error dega 



    return 0;
}