#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printss(string que, string ans){
    if(que.length()==0){
cout<<ans<<endl;
return;
    }
    char word = que.at(0);
    string after= que.substr(1);
printss(after,ans+ "");
printss(after,ans + word);

// printss()
}
// level and option recursion
int main(){
    
string str ;
getline(cin,str);
printss(str,"");


    return 0;
}