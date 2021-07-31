
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
void printpermutaion(string que,string ans){
if(que.length()==0){
    cout<<ans<<endl;
    return;

}

for(int i=0;i<que.length();i++){
    char ch= que[i];
    string qlpart = que.substr(0,i);
    string qrpart = que.substr(i+1);
    string fullpart =qlpart+qrpart;
    printpermutaion(fullpart,ans+ch);
}
}
int main(){
   printpermutaion("abc","");

    return 0;
}