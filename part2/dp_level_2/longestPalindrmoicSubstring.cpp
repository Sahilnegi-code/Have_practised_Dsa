#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int max ;
    string st ="abccbc";
    bool dp[6][6];
    for(int rr = 0 ;rr<st.size();rr++){
        for(int i =0,j =rr;j<st.size();i++,j++){
            if(rr==0){
                dp[i][j]=true;



            }
            else if(rr==1){
                if(st[i]==st[j]){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=false;


                }

            }
            else{


     if(st[i]==st[j]  && dp[i+1][j-1]==true ){
         dp[i][j]=true;

     }   
     else{
dp[i][j]=false;

     }    


            }

     if(dp[i][j]){
    max = rr+1;

     }


        }




    }
cout<<max;


    return 0;
}