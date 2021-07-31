/
#include<iostream>
using namespace std;
class product;
class product{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        m=x;
        n=y;
    }
    int getm(){
        return m;
    }
    int getn(){
        return n;
    }
};
class item{
    private:
    int a, b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void showdata(){
  
        cout<<a<<endl<<b;
            }
            item(product p1){
                a= p1.getm();
                b =p1.getn();
            }
            item(){}

};

int main(){
    item i1;
    product p1;
    p1.setdata(3,5);
    i1=p1;
    i1.showdata();
    return 0;
}