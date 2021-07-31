#include<string>
#include<iostream>
using namespace std;



int main(){
    string s1;
cout<<"enter your name-"<<endl;
// getline(cin,s1);
cout<<s1;
// By the help of extraction operator(>>) we cant take full name
char arr[]=" students";
string s2;
// getline(cin,s2);
// while doing concating by + , one string obj should be there
// Useful mehods
/*
1-assign()
2-append()
3-insert()
4-replace()
5-erase()
6-find()
7-rfind()
8-compare()
9-c_str()
10-size()
*/
string k1;
// k1.assign("hello");
// k1.append(" sahil how are u?");
k1="hello";
// cout<<k1;
k1.insert(2,"red");


    return 0;
}