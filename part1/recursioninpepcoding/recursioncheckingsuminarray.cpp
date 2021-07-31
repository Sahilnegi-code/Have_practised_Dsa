#include<iostream>
#include<string>
using namespace std;
void checkingsuminarray(int arr[],int whichno,int sum,string ans,int idx){
    if(sum==whichno ){
        cout<<ans<<endl;
        return;
    }
    
    if( idx == 2 ){
        // cout<<ans<<endl;
        return;
    }

checkingsuminarray( arr,whichno, sum +arr[idx], ans+to_string(arr[idx])+"-", idx+1);
checkingsuminarray( arr,whichno, sum, ans, idx+1);
}
int main(){
int arr[]={10,20};
checkingsuminarray(arr,30,0,"",0);    
}