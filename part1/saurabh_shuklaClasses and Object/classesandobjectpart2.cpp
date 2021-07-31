#include<iostream>
using namespace std;
class Complex{
    private:

    int a,b;/* instance member variable*/
    public:
    void set_data(int x ,int y){         /* instance member function*/
        a=x;
        b=y;
        }
        void show_data(){
            cout<<"a="<<a<<" b="<<b;
            }
        Complex add(Complex c){
            Complex temp;
            temp.a=c.a+a;
            temp.b=b+c.b;
            return temp;
            }    

};
int main(){
    Complex c1,c2;
    Complex c3;
    c1.set_data(1,2);
    c2.set_data(3,4);
    c3=c1.add(c2);
    c3.show_data();
    return 0;
}