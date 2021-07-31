#include<iostream>
using namespace std;
class base1{
protected:
int base1int;
public:
void setbase1int(int b1){
    base1int= b1;
}
};
class base2{
protected:
int base2int;
public:
void setbase2int(int b1){
    base2int= b1;
}
};
class derived : public base1 ,public base2{
public:
void show(){
    cout<<base1int<<endl<<base2int<<endl;
}
};


int main(){
    derived harry1;
    harry1.setbase1int(2);
    harry1.setbase2int(1);
    harry1.show();
    return 0;
}