#include <bits/stdc++.h>
using namespace std;
int main(){
vector <int>arr={1,3,4,52,50,90};
int buy =arr[0];
int sell;
int profit=0;
int max =0;
for(int i =1;i<arr.size();i++)
{
    
    sell = arr[i];
    if(sell-buy>max){
        max = sell-buy;  


    }else{
        profit = profit+ max;
        max =0;
        buy = arr[i];
    }


}
cout<<profit+max;
    return 0;
}