#include<bits/stdc++.h>
using namespace std;
    int main(){
        
vector <int> arr={1,53,24,21,31};
int buy = arr[0];
int sell=0;
int profit =0;
int max =0;
int charge=3;
for(int i =1;i<arr.size();i++){
    sell=arr[i];
    if(sell-buy-charge>profit){
        profit=sell-buy-charge;
    }


if(arr[i]<arr[i-1]){
    max = max+profit;
    profit=0;
    buy = arr[i];

}

}



if(arr[arr.size()-2]<arr[arr.size()-1]){
cout<<max+profit;
}else{
    cout<<max;
}

return 0;
    }