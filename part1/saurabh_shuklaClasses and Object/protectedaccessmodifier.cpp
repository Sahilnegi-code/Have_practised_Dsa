#include<iostream>
using namespace std;
class base{
protected:
int a=5;
private:
int b=6;
};
class derived : private base{
    public:
void print(){
    cout<<a<<endl;
}
};
// protected mai base class kai chheze jo private bhi rha aur inherit bhi ho jaya and vo accessible hogi in derived class 
// private memmber not inherited

int main(){
base b;
derived a ;
a.print();
    return 0;
}