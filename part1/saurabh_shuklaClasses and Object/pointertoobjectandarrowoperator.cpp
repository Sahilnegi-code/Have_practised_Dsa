#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"the real part is "<<real<<endl;
        cout<<" the imaginary part is "<<imaginary<<endl;

    }
    void setData(int a,int b){
        real =a;
        imaginary=b;
        
    }
};
int main(){
complex c1;
complex *ptr = &c1;
// complex *ptr = new complex;
complex c2;
complex *pt=&c2;
 (*ptr).setData(1,4);/* ptr->setData(1,54) ptr jis object ko point kr rha hai us object ka set Data*/
(*ptr).getData();
pt->setData(3,6);
pt->getData();
return 0;
}