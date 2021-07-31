#include<iostream>
using namespace std;
void fun(int i ){
throw i;
}
int main(){
    cout<<"welcome"<<endl;
    // try ka ssath one catch hona chaiya
    // runt time error comes when throw kra not having catching and data type is different with throw in comparison of actch
    // agar throw bhi nhi hai to run time pa bhi nhi chlaga
    int i =10;
    try{
if(i==10){
    throw 5;
    }
        
if(i==3){
    fun(i);
    // throw "hello";
}

}
    catch(int i){
        cout<<i<<endl;
       cout<<" hello world"<<endl; 
    }
  
    cout<<"outside";
    return 0;
}