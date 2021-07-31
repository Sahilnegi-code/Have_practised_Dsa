#include<bits/stdc++.h>
using namespace std;
// less range and In serial
int main(){
int arr[]={
6,3,3,5,2,4,7,4
};
int max =7;
int min= 2;
int range = 7-2+1; 
int farr[range];
for(int i =0;i<range;i++){
    farr[i]=0;
}
for(int i =0;i<8;i++){
    int idx = arr[i]-min; 
    farr[idx]=farr[idx]+1;
}
// for(int i =0;i<range;i++){
//     // farr[arr[i]-min]=farr[arr[i]-min]+1;
//     cout<<farr[i]<<endl;
// }



// #######  # correct #####3



// cout<<"sahil negi"<<endl;
for(int i =1;i<range;i++){
    // farr[arr[i]-min]=farr[arr[i]-min]+1;
    // cout<<farr[i]<<endl;
farr[i]=farr[i-1]+farr[i];
}
// for(int i =0;i<range;i++){
//     // farr[arr[i]-min]=farr[arr[i]-min]+1;
//     cout<<farr[i]<<endl;

// }

//  #### correct #######@@@@@



int ans[8];
for(int i =0;i<8;i++){
    ans[i]=0;
}


int i =8-1;
while(i>=0){
//     int val = arr[i];
//     int pos = farr[arr[i]-2];
//    int idx = pos-1;
//    ans[idx ]=val;
int findex = arr[i]-2;
int ansindex= farr[findex]-1;
ans[ansindex]=arr[i];


   farr[arr[i]-2]--;
    i--;

}
for(int i =0;i<range;i++){

    // farr[arr[i]-min]=farr[arr[i]-min]+1;
    cout<<ans[i]<<endl;
}

// for(int i =0;i<8;i++){
//     arr[i]=ans[i];
// }









    return 0;
}