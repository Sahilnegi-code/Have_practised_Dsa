#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"tell row-";
    cin>>n;
    int spr=-1;

    int spl=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=spl;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=spr;k++){
            cout<<" ";
        }
        if(2<=i && i<=(n-1)){
            cout<<"*";
            }
        
        cout<<endl;
        if(i<=n/2){
            spl=spl-1;
            spr=spr+2;
  


        }
        else{
            spl=spl+1;
            spr=spr-2;
        }
    }
    
    return 0;
}