#include<iostream>
using namespace std;
class A{
    private:
    int a,*p,b;
    public:
    A(){
        /*defalut constructor*/
        a=0;
        b=0;
        p = new int;
    }
    A(int x,int y,int z){
        a=x;
        b=y;
        p=new int;
        *p=z;
    }

};
// object ka pehli jindagi ma chlna wala fun constructor hota hai`
// pehle object bnta hai tab constructor bnta hai

// Dynamic constructor-->can allocate dynamiclally cretaed memory to the object
// second meaning->vo memory block create krna  jisko object ka member point kr rha hai.
// object is going to use memory region ,which is dynmaically created by constructor

int main(){

    A o1,o2,o3(3,4,5);


    return 0;
}