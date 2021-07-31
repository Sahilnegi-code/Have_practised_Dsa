#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class integer{
int x;
public:
void setdata(int a){
x=a;
}
void showdata(){
    cout<<x;

}

integer operator++(){
    integer i;
     i.x=x+1  ;    
    return i;
}
integer operator++(int){
integer i;
i.x =x++;
return i;
}
// post argument one argument walo ko call krega
};
int main(){
    integer i1,i2;
    i1.setdata(3);
    i1.showdata();
    cout<<endl;
    // i2=++i1; 
    i2 =i1++;

    // i2=i1.opertor++();
    i1.showdata();
    cout<<endl;
    i2.showdata();

        return 0;
}
