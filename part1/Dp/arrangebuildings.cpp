#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int oldbuilding=1;
    int oldspace=1;
    int newbuilding;
    int newspace;
    int i =2;
    while(i<=n){
         newbuilding=oldspace;
        newspace = oldspace+ oldbuilding;
        oldbuilding=newbuilding;
        oldspace=newspace;
        i++;
}
cout<< (newspace+ newbuilding)*(newspace+ newbuilding);
    return 0;
}