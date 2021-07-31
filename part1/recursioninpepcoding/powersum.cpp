#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int powersum(int x,int p,int num){
int val = x-pow(num,p);
if(val==0){
    return 1;
}
if(val<0){
    return 0;
}
int done =powersum(val,p,num+1)+powersum(x,p,num+1);
return done;
}
int main(){
    int p;
    int x;
    cin>>p>>x;
   cout<< powersum(x,p,1);
    return 0;
}