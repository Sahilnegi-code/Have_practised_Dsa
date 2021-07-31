#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void placingthedistinctqueen(int queenno ,vector<vector<int>> v, int totalqueen){
if(queenno==totalqueen+1){


    for(int i = 0;i<v.size();i++){
    for(int j =0;j<v[i].size();j++){
        if(v[i][j]==0){

     cout<<"-";
        }
        else
        {
     cout<<v[i][j];
            
        }
        
        }
        cout<<endl;

    }
return;
    }










for(int i = 0;i<v.size();i++){
    for(int j =0;j<v[i].size();j++){
        if(v[i][j]==0){
v[i][j] =queenno;
placingthedistinctqueen(queenno+1,v,totalqueen);
v[i][j]=0;
        }

    }
}

}
signed main(){
vector<vector<int>> arr={
    {
        0,0
    },
    {
        0,0

    }
};
placingthedistinctqueen(1,arr,2);

    return 0;
}