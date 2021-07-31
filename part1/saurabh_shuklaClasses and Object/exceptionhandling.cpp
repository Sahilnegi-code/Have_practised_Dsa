#include<bits/stdc++.h>
using namespace std;
void fun(){
    throw 1;
}
int main(){
    // try,catch and throw
    int i=1;
    cout<<"welcome\n";
    try{
        if(i==1){
    fun();
        }
        if(i==2){
            throw i;
        }
        
        if(i==3){
            throw 3.5;
        }

        cout<<"hello world\n";
cout<<"\ntry";
    }
    // try always take  catch both are required
    // if both are  not there only throw is there  then terminate fun will run
    // passing different datatype then run time error we get
    // more than one catch 
    // throw ka aga a kuch hona chaiya wrna run time error ayega
    // any type od data can be throw
    catch(int){
cout<<"exception no"<<endl;

    }
    cout<<"last line";
    return 0;
}