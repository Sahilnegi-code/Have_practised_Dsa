#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"row";
    cin>>n;
 int star,space;
 star=n/2+1;
//  left to right is added
 space=1;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=star;j++){
         cout<<"*";
     }
     for(int k=1;k<=space;k++){
         cout<<" ";
     }
     for(int l=1;l<=star;l++){
         cout<<"*";
     }
     cout<<endl;

     if(i<=n/2){
        star= star-1;
       space=space+2; 
     }
     else{
          star= star+1;
       space=space-2;
         }
     }   
    
    
    
    return 0;
    }