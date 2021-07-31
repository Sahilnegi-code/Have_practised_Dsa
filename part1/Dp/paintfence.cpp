#include<iostream>
using namespace std;
int main(){
    int nc;
    int nh;
    cin>>nc;
    cin>>nh;
    int same=nc;
    int diff=nc*(nc-1);
    int total = same+diff;
    int newdiff;
    int newsame;
    
    for(int i =3;i<=nh;i++){
newsame= diff;

newdiff= total*(nc-1);
total = newsame+newdiff;
diff=newdiff;
same=newsame;

    }
    cout<<diff+same;
    return 0;

}