#include<iostream>
using namespace std;
#include<fstream>
// the useful class  for working with files in c++
// 1--->fstream=
// 2--->ifstream=derived from fstreambase
// 3--->ofstream=derived from fstreambase
int main(){
// open("hello.txt");
// string g = "good";
// string v ;
// ofstream write("hello.txt");
// write<<g;
// ifstream read("hello.txt");
// read>>v;
// getline(read,v);
// getline(read,v);
// getline(read,v);
// cout<<v;
// ofstream write("sahil.txt");
// string s="sahil negi";
// write<<"my name is "+s;
// write.close();
// ifstream read("sahil.txt");
// string k ;
// getline(read,k);
// cout<<k;
ofstream write;
write.open("sample.txt");
write<<"sahil\n this is my friend and he likes to live alone in this darkness to remove negativity";
write.close();
ifstream input;
input.open("sample.txt");
string s2,s3;
while(input.eof()==0){
getline(input,s2);
cout<<s2;
}     
// cout<<s3;

    return 0;
}