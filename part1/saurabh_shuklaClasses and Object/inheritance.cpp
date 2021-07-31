#include<iostream>
using namespace std;
// class A{
//     private:
//     int a;
//     protected:
// void setvalue(int x){
//     a=x;
// }
// };
// class B :public A{
// public:
// void setdata(int x){
//     setvalue(x);
// }
// };
class Car{
protected:
int gear;
public:
void increament(){
    if(gear<5){
        gear++;
    }
}
};
class SportsCar:public Car{

};
int main(){
// B obj;
// obj.setdata(5);

    return 0;
}