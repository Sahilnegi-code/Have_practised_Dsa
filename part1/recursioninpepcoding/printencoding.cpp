#include<iostream>
#include<string>
using namespace std;
void printencoding( string no, string ans){

if(no.length()==0){
    cout<<ans<<endl;
    return ;
}                                                                                                                                                                              
else if(no.at(0)=='0'){
    cout<<ans<<endl;
    return;
}
else if(no.length()==1){
int  takeno = no[0]-'0';
char c=(char) takeno + 97-1;
ans = ans + c;
cout<<ans<<endl;
return;
}

char ch =no[0];
string roq = no.substr(1);

int  takeno = ch-'0';
char c=(char) takeno + 97-1;

printencoding(roq,ans+c);
string ch2 =no.substr(0,2);

string roq2 = no.substr(2);
 int ch2bhaidekh= stoi(ch2);
 char c1 = 64+ch2bhaidekh;

printencoding(roq2,ans+c1);





}

int main(){
    // string no 
    // cin>>no;
    printencoding("103","");

// int a =stoi("48");
// cout<<a;
// string v=" sahil" + to_string(12) ; 
// cout<<v;
    // char c =(char) 96 
    // + '2'-'0';
    // cout<<c;
    return 0;
}