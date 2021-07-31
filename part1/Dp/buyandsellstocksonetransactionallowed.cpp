#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={4,2,41,44,1};
    int buy =arr[0];
    int sell;
    int profitmax=0;
    for(int i =1;i<5;i++)
    {
        sell= arr[i];
        if(sell-buy>profitmax){
            profitmax=sell-buy;
         

        }
        if(arr[i]<buy){
        buy=arr[i];
        }
   }
   cout<<profitmax;


    return 0;
}