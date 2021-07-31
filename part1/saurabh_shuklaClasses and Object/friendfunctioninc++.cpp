#include<iostream>
using namespace std;
class compiler{
    private:
    int a,b;
    public:
    void set(int a ,int b)
    {
        this ->a =a ;
        this ->b =b;

    } 
    void get(){
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    friend void fun(compiler);
};
void fun(compiler c){
    cout<<"the sum of "<<c.a<<"and "<<c.b <<"is :"<<c.a+c.b;
    }
// members ka lai hi membership label lgta hai
// friend ek memeber function nhi to uska claller object bhi nhi hoga
int main(){
    // friend function can access any member of the class to which it is a friend
    // friend function cannot access members of the class directly
compiler c;
c.set(1,6);
fun(c);

    return 0;
}