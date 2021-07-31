#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
int main(){
// char 
// 1-need to know before hand
// 2-larger size required for operation (concentrate or append)
// 3-no terminating extra chracter.
// String
// 1-no need to know before use hand.
// 2-performing operation like concatenation & append is easier.
// 3-termination with a special chahracter.


// string str;
// cin>>str;
// cout<<str;

// different ways to declare a string
// 1-string str(5,'s');

// string str;
// getline(cin,str);
// cout<<str;
// string s1="fam", s2="ily";
// s1.append(s2);

// s1=s1+s2;
// cout<<s1<<endl;
// cout<<s2<<endl;
// s1.clear();

// cout<<s1;
// string s1 ="abc";
// string s2="abc";
// cout<<s1.compare(s2)<<endl;
// if(!s1.compare(s2)){
// cout<<"same;";
// }
// string s1 ="abc";
// cout<<s1<<endl;
// s1.clear();
// int a =s1.empty();
// if s1.empty if it is really empty , it returns 1. if not give 0.
// cout<<a;
// if(s1.empty()){
//     cout<<"yes it is empty";
// }

// string s1="nincompo";
// s1.erase(3,3);
// kha sa  index,kitna krna hai

// cout<<s1;
// int k=s1.find("com");
// it return first index of words which are finding.
// cout<<k;
// s1.insert(2,"lol");
// cout<<s1.length();
// for(int i=0;i<s1.length();i++){
//     cout<<s1[i]<<endl;
// }
// string s = s1.substr(6,2);
// index kha sa , kha tak.
// cout<<s;
// string s1 ="786";
// int x = stoi(s1);
// cout<< x+2;
// int x =786;
// cout<< to_string(x)+"2"<<endl;
string s1= "wdwj";
sort(s1.begin(),s1.end());
cout<<s1<<endl;
return 0;
}