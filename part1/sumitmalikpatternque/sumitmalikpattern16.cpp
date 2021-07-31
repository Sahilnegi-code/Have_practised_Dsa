#include<iostream>
using namespace std;
int main(){
    int n;
 cout<<"enter row-";
    cin>> n;       
    int lstar=1;
    
    int space  =  2*n-3; 
    int d = 1;
    int val;

    for(int i=1;i<=n;i++){
    
val=i;
if(i==val){
    val = n-1;

}
         
        for(int j=1;j<=lstar;j++){
            cout<<j;
            
        }

        for(int k =1;k<=space;k++){
            cout<<" ";

        }
        for(int l=1;l<=(d);l++){
            cout<<val;
            val--;
        }

        cout<<endl;

        
        lstar++;
        space= space-2;
     
        if(d<=(n-1)){
          d++;
        }
}

    return 0;
    }