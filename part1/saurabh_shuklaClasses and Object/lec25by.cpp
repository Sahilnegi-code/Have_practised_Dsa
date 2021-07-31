#include<iostream>
using namespace std;
class complex{
    private:
    int real,imaginary;
    public:
    void getdata(){
        cout<<"real:"<<real<<endl<<"imaginary:"<<imaginary<<endl;
    }
    void setdata(int a ,int b){
real =a;
imaginary=b;

    }

};
int main(){
    // complex c2;
    // c2.setdata(1,-4);
    // c2.getdata();
    // int *p = new int(40);
    // delete p;

    // int *arr = new int[3];
    // arr[0]=1;
    // arr[1]=2;
    // arr[2]=3;
    // delete []arr;
    // cout<<*p<<endl;
    // cout<<*arr;
    // cout<<*(arr+1);
    // cout<<*(arr+2);
//     complex c1;
// complex *ptr = &c1;
complex *ptr = new complex;
complex *ptr = new complex[4];

(*ptr).setdata(1,54);
(*ptr).getdata();
ptr->setdata(2,-10);
ptr->getdata();






    return 0;
}