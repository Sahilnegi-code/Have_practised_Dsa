#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"row-"<<endl;
    cin>>row;
    int spr,spl;
     spl=0;
     spr=row-1;
     for(int i=1;i<=row;i++){
         for(int j=1;j<=spl;j++){
             cout<<" ";

         }
         cout<<"*";
         for(int k=1;k<=spl;k++){
             cout<<" ";
             }
             cout<<endl;
             spl=spl+1;
             spr=spr-1;
     }
         return 0;
}