#include<iostream>
using namespace std;
int knapsack(int wt[], int max[],int limit,int idx,int sum,int exceedlimit,int size){



    if(exceedlimit>limit){
        
    cout<<"inside"<<exceedlimit<<endl;
        return (sum-max[idx-1]);
    
}
else if(limit==exceedlimit || idx==size){

    cout<<"outside"<<exceedlimit<<endl;

    return sum;
}


int  include =knapsack(wt,max,limit,idx+1,sum+max[idx],exceedlimit+wt[idx],size);
int  exclude= knapsack(wt,max,limit,idx+1,sum,exceedlimit,size);
int getvalue = include>exclude?include:exclude;
return getvalue;

}
int main(){
    int wt[]={3,3,2,5};
    int max[]={1,4,5,1};
    int limit=5;
    cout<<knapsack(wt,max,limit,0,0,0,4);
    return 0;
}
