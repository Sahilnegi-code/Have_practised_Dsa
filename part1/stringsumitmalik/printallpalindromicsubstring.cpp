#include<iostream>
// substring is part of string but in sequence 

#include<string>
using namespace std;
// void solution(string);
// bool is(string);

bool is(string ss){
    int i =0;
    int j = ss.length()-1;
    while(i<=j){
        char chi = ss[i];
        char chl = ss[j];
        if(chi!=chl){
            return false;
        }
        i++;
        j--;
    }
return true;
}
void solution(string str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<=str.length();j++){
            string ss = str.substr(i,j);
            if(is(ss) == true){
                cout<<ss<<endl;
            }
        }

    }
}


int main(){
cout<<"string"<<endl;
string str;
cin>>str;
solution(str);
    return 0;
}
