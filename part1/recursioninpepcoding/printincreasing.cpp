// #include<iostream>
#include<iostream>
using namespace std;
void printincrease(int no){
    if(no==1){
        cout<<no<<endl;
        return ;
    }
   printincrease(no-1);
   cout<<no<<endl;
;}
int main(){
    int k;
    cin>>k;
printincrease(k);
    return 0;
}