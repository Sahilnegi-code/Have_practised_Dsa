#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int x, int y,int z)
{
    if(x>y && x>z){
        return x;
    }
    else if(y>z && y>x){
        return y;
    }
    return z;
}
int arr[][3] = {{1, 2, 1}, {0, 3, 2}, {1, 1, 1}};
int dp[3]={-1,-1,-1};
int maxgold(int col)
{
    if(col==3){
        return 0;
    }
    if(dp[col] != -1){
    // cout<<dp[col]<<endl;
        return dp[col];
    }
int a ,b , c;
       for(int row =0;row<3;row++){
           if(row==0){
                a = arr[row][col]+maxgold(col+1)  ;
           }
           else if (row==1){
                b = arr[row][col]+maxgold(col+1)  ;


           }
           else {
                c = arr[row][col]+maxgold(col+1)  ;

           }
       }
       return dp[col]=max(a,b,c);
 


}
int main()
{
    
    int col=0;
    cout << maxgold(col)<<endl;
    for(int i =0;i<3;i++){
        cout<<dp[i]<<endl;
    }
    return 0;
}