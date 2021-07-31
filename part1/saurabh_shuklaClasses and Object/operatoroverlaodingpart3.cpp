#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int a, b;
    public:
void setdata(int a ,int b){
    this->a =a;
    this->b = b;
    }
    // -------------->>>>>> preincreement
    
    Complex operator++(){
        Complex temp;
        a++;
        b++;

        temp.a =a;
        temp.b =b;
return temp;        
    }

    Complex operator++(int){
        Complex temp;
        temp.a =a;
        temp.b =b;
        a++;
        b++;

return temp;        
    }
void getData(){
cout<<"a"<< a<<endl<<"b"<<b<<endl;

}
};
// operatoroverloadingis is same as function operator + should be theree and it works when it has same non primitive datatype
// operator overloading cannot be overload typeof ,?:.  
int main(){
Complex a,b,c;
a.setdata(1,2);
// b=++a;
// a.getData();
b=a++;
b.getData();
a.getData();
    return 0;
}
