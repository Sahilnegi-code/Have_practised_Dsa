#include<iostream>
using namespace std;

class student{
    protected:
int roll_no;
protected:
int x=4;
void set(int r ){
    roll_no=r;

}
void get(){
    cout<<roll_no<<endl;
}
    
};
class exam :public student{
protected:
float maths;
float phy;
public:
void set_marks(int m ,int p){
    maths = m;
    phy=p;
}
void get_marks(){
    cout<<maths<<endl;
    cout<<phy<<endl;

}


} ;

class result : public exam{
    public:
    void avg(){
cout<<"avg  is : "<<(phy+maths)/2<<endl;
cout<<"rol_no is :"<<roll_no<<endl;

    }
};


int main(){
 result e1;
e1.set_marks(12,34);
e1.set(3);
e1.avg();
e1.x;
    return 0;
}