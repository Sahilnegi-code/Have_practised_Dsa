#include<iostream>
#include<string.h>
#include<string>
using namespace std;
// string is derived datatype

int main(){
    // string str;
    // string k =str+"k";
    // cout<<k;
    // for(int i =0;i<=)
    char s[3]="he";
    char k[3]="se";
    char t[5];
    // cout<<d;
    strcpy(t,strcat(s,k));
// cout<<t<<endl;
   char r[3];
   r[0]='a';
   r[1]='b';
//    cout<<r; 
    // strcpy(k,s);
    // cout<<k<<endl;
    // cout<<s;
    string name ="hello";
    string s3(  "hello");
    string paisa;
    // cin>>paisa;
    cout<<paisa<<endl;
    string kon ;
    kon = kon +'a';
    // cout<<kon;
    string pilo;
    pilo.assign("he ll");
 
//    pilo.append(" megi");
//    pilo.insert(1,'a');
//    pilo.replace(1,2,"a");
//    pilo.erase();

int i = pilo.find("l");
int j = pilo.rfind("l");
   cout<<pilo.size();
char s1[12];
strcpy(s1,pilo.c_str());
//    cout<<;

    return 0;

}