#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;

    }
    void showData(){
        cout<<"a:"<<a<<endl<<"b:"<<b;

    }
    friend  void fun(complex);
};
void fun(complex c){
cout<<"sum is :"<<c.a+c.b;
}
int main(){
    // friend function is not a  member function of a class to which it is a friend
    // friend func is declared in the class with friend keyword
    // it must be defined outside the class to which it is a friend
    // friend fun can also access private member 
    // friend function cannot access member of the class directly 
    // it should be defined with membershio label
    // friend func can become friend to more than one class
    

complex c1;
fun(c1);
    return 0;
}















