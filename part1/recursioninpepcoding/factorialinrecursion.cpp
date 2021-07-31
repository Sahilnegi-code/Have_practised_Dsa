#include<iostream>
using namespace std;
int factorial(int no){
    if(no==1){
        return no;

    }
    int k;
    
    k=factorial(no-1);
int fact = no *k;
return fact;

}

int main(){
int no;
cin>>no;
cout<<factorial(no);
    return 0;
}