#include<iostream>
using namespace std;
int freq(int,int);
int main(){
    int n;
    cin>>n;
    int f ;
    cin>>f;
    cout<<freq(n,f);

return 0;
}
int freq(int f ,int what){
    int freq=0;
    while(f!=0){
        int no = f%10;
        if(what==no){
            freq=freq+1;
        }
        f=f/10;

    }
    return freq;
}
