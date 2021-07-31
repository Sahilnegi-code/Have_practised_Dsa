#include<iostream>
#include<string>
#include<bits/stdc++.h>
int dp[7][6];
using namespace std;
int max(int x ,int y){
    return (x>y?x:y);
}


int  lcs(string _name1,string $name2,int _1,int _2){
    if(_name1.length()==_1|| $name2.length()== _2 ){
        return 0;
    }
    if(dp[_1][_2] != -1){
        // cout<< dp[_1][_2] <<endl;
        
        return dp[_1][_2];
    }
    // cout<<_1<< " "<<_2<< endl;
if(_name1[_1]==$name2[_2]){
    return dp[_1][_2]=1+lcs(_name1,$name2,_1+1,_2+1);
}
else{
    return dp[_1][_2]=max(lcs(_name1,$name2,_1+1,_2),lcs(_name1,$name2,_1,_2+1));
}
}
int main(){
string name="GXTXAYB";
string name2= "AGGTAB";
int _1=0;
int _2=0;
memset(dp,-1,sizeof(dp));
cout<<lcs(name,name2, _1,_2);
    return 0;
}