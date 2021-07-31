#include<iostream>
#include<string>
#include<bits/stdc++.h>
    using namespace std;
    // base class
class employee{
public:
employee(){}
int no =1;
int id;
float salary;
 employee(int id , float salary){
     this ->id =id;
     this ->salary= salary;
 }
};
// default visibiity mode is private
// private inheritance are never inherited 


class programmer: private employee{
    public:
    string lang ="c++";
    programmer(int id , float salary){
    this->id = id;
    this ->salary = salary;

    }
 void print(){
        cout<<"string:"<<lang<<"id:"<<id<<endl<<"salary:"<<salary<<endl;
        cout<<no;
    }
} ;  
int main(){
    programmer p1(12,4500.56);
    p1.print();
    
    return 0;
}