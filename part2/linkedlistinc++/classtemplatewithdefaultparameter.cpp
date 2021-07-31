#include<iostream>
using namespace std;
template<class t=int,class t1=float >
class sahil{
public:
t a;
t1 b;
sahil( t a1 ,t1 b1 ){
a=a1;
b = b1;
}
void display(){
    cout<<a<<" "<<endl<<b;
}
};



template <class t1,class t2>
float fun(t1 a ,t2 b){
    return (a+b)/2;
}



template <class k>
class harry{
public:
int data;
harry(k dta){
    data=dta;
}

void display();

};


template<class k>
void harry<k>::display(){
    cout<<data;
}

void hello(int name){
cout<<"hello "<<name<<endl;
}
template<class c>
void hello(c name){
cout<<"hello first "<<name<<endl;
}
int main(){
// sahil <>s(3,5.2);<--- this is by default argument so nothing in template
// sahil <int,string>t(3,"sahil");
// t.display();
// cout<<fun(8.0,5);
// harry <int>h(100);
// h.display();
// hello(5);---->exact match take highest prirority
    return 0;
}