#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jk", "mno", "ps", "tu", "vwx", "yz"};
void printKPC(string que,string ans){
    if(que.length()==0){
        cout<<ans<<endl;
        return;
       
    }
    char ch = que.at(0);
    string roq = que.substr(1);
    string incode=codes[ch-'0'];
    for(int i =0;i<incode.length();i++){
        char get = incode[i];
        printKPC(roq,ans+get);


    }
}
int main(){
    string str;
    cin >> str;
    printKPC(str, "");

}
