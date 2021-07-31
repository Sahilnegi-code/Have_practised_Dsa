#include<iostream>
using namespace std;
int calc(int,int);
int main(){
   int n;
   cin>>n;
   int r;
   cin>>r;
   cout<<calc(n,r);



return 0;
}
int calc(int n ,int r){
    int na=1;
    int og =n;
while(n>0){
na=na*n;
n--;
}
int ca;
int ra=1;
int p =og-r;
while(p>0){
    ca=ra*p;
    ra=ca;
    p--;
    }

return  na/ra;

}