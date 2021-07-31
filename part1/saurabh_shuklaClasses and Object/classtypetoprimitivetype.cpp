#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
int a,b;
public:
void setData(int a,int b){
this->a=a;
this->b=b;
}
void showData(){
    cout<<a<<" + i" <<b;
}
operator int(){
    return a+b;
}

};
// class type to primitive type can be implemented with casting operator

int main(){
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    cout<<endl;
    int a=4;
    a=c1; 
    cout<<a;
    

    return 0;
}