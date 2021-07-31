#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"first row and then col";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
        if(j<=(col-i)){
            cout<<" ";
        }
        else{
            cout<<"*";
        }

        }

        cout<<endl;
    }
    return 0;
    }