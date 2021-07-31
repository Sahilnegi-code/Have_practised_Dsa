#include<iostream>


using namespace std;
void swap(int *,int *);
int main(){
int a,b;
cout<<"enter two no";
cin>>a>>b;
swap(a,b);
cout<<a<<endl<<b;
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
   *x=*y;
   *y=*x; 
}
