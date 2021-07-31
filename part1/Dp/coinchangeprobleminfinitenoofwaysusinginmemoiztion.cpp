#include<bits/stdc++.h>
using namespace std;
int ccp(int coin[],int tar ,int i ,int idxsize ){
if(tar==0 ){
    return 1;
}
if(tar<0  || idxsize == i){
    return 0;
}
return ccp(coin,tar-coin[i],i,idxsize)+ccp(coin,tar,i+1,idxsize);

}
int main(){
    int coin[]={1,4,3};
    int tar =3;
    int i =0;
    int idxsize =3;    
  cout<<ccp(coin,tar,i,idxsize);
    return 0;
}