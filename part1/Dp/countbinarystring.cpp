#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int oldzeros=1;
    int oldones=1;
    int newzeros;
    int newones;
    int i =2;
    while(i<=n){
        newzeros =oldones;
        newones = oldones+ oldzeros;
        oldzeros=newzeros;
        oldones=newones;
        i++;
}
cout<< newzeros+ newones;
    return 0;
}