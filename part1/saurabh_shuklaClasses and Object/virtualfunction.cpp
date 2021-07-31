#include<iostream>
using namespace std;
class A{
public:
virtual void f1();
};
class B:public A{
    
    public:

    // function  overriding

 void f1(){

}
void f2(){

}

};
int main(){
A  *p,o1;

B  oz;
p=&oz;
p->f1();  
// pointer ka content ka hisab sa 






    return 0;
}