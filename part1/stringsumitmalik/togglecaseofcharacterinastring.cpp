#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
string solution(string name){
    int ch ;
    char big;
    char small;
    string str="";
    for(int i =0;i<name.size();i++){
ch = name.at(i);
if(65<=ch && ch<=90){
    big =(char) 97 + (ch-65);
    str = str + big;
}
else{
    small =(char) 65+(ch-97);
    str= str + small;
}

    }
return str;


}
int main(){
    string name;
    getline(cin,name);
    cout<<solution(name);
    return 0;
}
