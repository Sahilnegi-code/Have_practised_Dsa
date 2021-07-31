#include<iostream>
using namespace std;
class base{

public:
int data1=2;
int data2=3;
void setData(int a ,int b){
    data1 = a;
    data2=b;
}
int getdata1(){
    return data1;
}
int getdata2(){
    return data2;;
}

};
class derived: public base{
int data3;
public:

void process(){
    data3 = data2* getdata1();
}


void display(){
    cout<<getdata1()<<endl;
    cout<<getdata2()<<endl;
    cout<<data3<<endl;
}

};
int main(){

derived der;
// der.setData(5,10);
// der.process();
// der.display();
cout<<der.data1;
    return 0;
}