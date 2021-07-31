// string class
#include<iostream>
#include<string>

using namespace std;
int main(){
    char c[30]="sahil negi";
    // | s | a | h |'\0'  |  |<---it take null charater automatically
    // string is pre-defined
    //  char array,string class
    // 1->defining a class means new datatype ,string is a derived data type
    // for speed we use char array and string class
    /*string s1="hello";
    string s2("hello");
    string s2= string("hello");
    char s4[]="sahil negi";
    string s2=s4;/* string s2(s4);
    string s3 =s2;*/
    // string s1;
    // s1="hello";
   /* we cannot do this 
   char str[19] ;
   str="hello";*/
   string s2 ="students";
//    s1 +=s2;
//    cout<<s2;
//    s1.insert(1,"123");
// s1.replace(2,3,"mant");

// s1.erase();
// cout<<s1;
string k2 = "student";
string deb="he hestudent how ";
// int no=deb.find("student");
int no=deb.rfind("he");

cout<<no<<endl;
int res=k2.compare(deb);
cout<<res;


//    cout<<s1;



    return 0;
}