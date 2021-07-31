#include<iostream>
using namespace std;
int main(){
int row, col;
cout<<"row is-"<<endl;
cin>>row;
cout<<"col is-"<<endl;
cin>>col;
for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(i==1 || i==row){cout<<"*";
        }
        else if(j==1||j==col){
            cout<<"*";
        }
        else{
            cout<<"_";
        }
       
        }
        cout<<endl;
        }


    return 0;
}