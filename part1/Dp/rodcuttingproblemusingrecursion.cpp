#include<bits/stdc++.h>
using namespace std;
int max(int x,int y){
    return (x>y?x:y);
}
int rc(int length[],int profit[], int limit,int i ,int arraysize){
if(i==arraysize || limit<0 || limit ==0 ||  limit < length[i]){
return 0;
}

int include;


include = profit[i]+rc(length,profit,limit-length[i],i,arraysize);



int exclude = rc(length,profit,limit,i+1,arraysize);
return max(include,exclude);
}
int main(){
    int length[]={1,2,3};
    int profit[]={12,25,15};
    int i =0;
    int arraysize=3;
    int limit =3;
cout<<rc(length,profit,limit,i,arraysize); 
    return 0;

}