#include<iostream>
using namespace std;
void printdecrease(int no){
    if(no==1){
        cout<<no;
        return ;
    }
    cout<<no<<endl;
    printdecrease(no-1);
}
int main(){
    int k;
    cin>>k;
printdecrease(k);
    return 0;
}