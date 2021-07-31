#include<iostream>

using namespace std;

// class a{
//     private:
//     int a;
//     protected:
//     void setvalue(int k){
//         a=k;
//     }

// };
// class b: public a{
//     public :
//     void setdata(int x){
//         setvalue(x);
//     }
// };

// class Car{
//     private:
//     int gear;
//     public:
//     void ing(){
//         gear++;
//     }
// };
// class Sportscar:public Car{

// };

class array{
    private:
    int a[10];
    public:
    void insert(int index,int value){
        a[value]=index;
    }
};
class stack: public array{

};
int main(){
    // class is used to describe properties and behaviour of an object
// b obj;

    return 0;
}
// Association
// 1-aggregation
// 2-composition
// 3-inheritance
//  Banana is a fruit
