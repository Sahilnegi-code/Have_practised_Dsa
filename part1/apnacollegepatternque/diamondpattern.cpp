#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
int sp =n/2;
int star =1;

    for(int i=1;i<=n;i++){
        for(int j =1;j<=sp;j++){
            cout<<" ";
            }
            for(int k=1;k<=star;k++){
                cout<<"*";
            }
            
            cout<<endl;
            if(i<=(n/2)){
                sp=sp-1;
                star= star+2;}
                else{
                    sp=sp+1;
                    star=star-2;
                    }
    
    }
return 0;
}