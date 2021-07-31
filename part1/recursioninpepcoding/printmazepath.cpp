#include<iostream>
using namespace std; 
void printmazepath(int dr ,int dc ,int sr ,int sc,string ans ){
if(dr>sr || dc>sc){
    return;
}
if(dr==sr && dc ==sc){
    cout<<ans<<endl;
    return;
}
printmazepath(dr+1 , dc , sr , sc, ans+"h" );
printmazepath(dr , dc +1, sr , sc, ans+"v" );

}
int main(){
    string ans="";
    printmazepath(0,0,2,2,ans);
    return 0;
}