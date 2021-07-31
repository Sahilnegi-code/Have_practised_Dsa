#include<iostream>
using namespace std;
void pss(int no,string ans ){
    
if( no==0 ){
    cout<<ans<<endl;
    return;
    
}
if(no< 0 ){
    return;
}
    pss(no-1,ans+"1");
  pss(no-2,ans+"2");
 
}

int main(){
    pss(2,"");
    return 0;
}