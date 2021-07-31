#include<iostream>
using namespace std;
int main(){
    int row , col;
    cout<<"tell row"<<endl;
    cin>>row;
    cout<<"tell coulmn"<<endl;
    cin>>col;
    for (int i=1;i<=row;i++){
        for(int j=1;j<=col-i +1;j++){
            cout<<"*";
        }     

        cout<<endl;
        }
    return 0;
}
