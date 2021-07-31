#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

string solution(string name){
    int   i =1;
    int   j=0 ;
int character;  
    string nstring="" ;
    nstring =nstring + name.at(0);
    for(int k =1;k<name.length();k++){
  int x =  name.at(i);
   int y = name.at(j);
  int diff = x-y;
nstring= nstring + to_string(diff) + name[i];
        i++;
        j++;
    }
    return nstring;
}


int main(){
    string name;
    getline(cin,name);
    cout<<solution(name);






    return 0;
}