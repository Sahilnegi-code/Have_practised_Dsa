#include<iostream>
using namespace std;
// ########## class type to another class type ###########
// 1--> conversion through constructor
// 2-->converstion through casting operator
// ################# class type to another class type ########### 

class Item{
    private:
    
    int x,y;
    public:
    void setData(int x, int y){
        this ->x=x;
        this ->y=y;

    }
   
    // int getX(){
    //     return x;
    // }
    // int getY(){
    //     return y;
    // }
};
class Product{
    private:
    int a,b;
    public:
    void showData(){
        cout<<"a--> "  <<a<<endl<<"b--> "<<b<<endl;
    }
       operator Item(){
    Item temp; 
        a =temp.getA();
        b=temp.getB();
        return temp;
    }
 
    // Product(){

    // }
    
//     Product(int a ,int b){
// this->a=a;
// this->b=b;
//     }

    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
    //  operator Item(){
    //     Item ip;
    //     a=ip.getX();
    //     b=ip.getY();

    //     return ip;
    // } 

    
};
int main(){
Item i1;
Product p1;
// p1 i1 ko parameterized constructor ma la rha hai  
i1.setData(3,5);

p1=i1;
p1.showData();

// p1 i1 ko parameterized constructor ma la rha hai  

    return 0;
}