#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
class Pair{
public:
int i;
int j ;
int time;
Pair(int i , int j , int t){
this-> i = i;
this -> j =j;
time = t;
}
};
signed main(){
     vector<vector<int>> array2d={
         {2,1,1},
         {1,1,0 },
         { 0,1,1}

    };
    queue<Pair> q;
    int totalorange =0;
    for(int i =0;i<array2d.size();i++){
        for(int j =0;j<array2d[i].size();j++){
            if(array2d[i][j]==1 || array2d[i][j]==2){
                totalorange += 1;

                
            }
            if(array2d[i][j] == 2){
                q.push(Pair(i,j,0));
            }

        }
    
    }
    int realtime;
    int count =0;
    while(q.size()>0){
        Pair took = q.front();
        q.pop();
        count++;

        
        realtime = took.time ;
       
       
        if(took.i+1<array2d.size() && array2d[took.i+1][took.j] == 1 ){   // down //

            array2d[took.i+1][took.j]=2;
            q.push(Pair(took.i+1,took.j,took.time+1));



        }
        if(took.i-1>=0 && array2d[took.i-1][took.j] == 1 ){   // up // 

            array2d[took.i-1][took.j]=2;
            q.push(Pair(took.i-1,took.j,took.time+1));
            }
        if(took.j-1>=0 && array2d[took.i][took.j-1] == 1 ){   // left //

            array2d[took.i][took.j-1]=2;
            q.push(Pair(took.i,took.j-1,took.time+1));
            }
        if(took.j+1<array2d[took.i].size() && array2d[took.i][took.j+1] == 1 ){

            array2d[took.i][took.j+1]=2;
            q.push(Pair(took.i,took.j+1,took.time+1));
            }
            


            }

            if(count<totalorange){
                cout<<"-1"<<endl;
            }
            else{
                cout<<"time"<<realtime<<endl;
            }




    return 0;
}








class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<Pair> q;
    int totalorange =0;
    for(int i =0;i<grid.size();i++){
        for(int j =0;j<grid[i].size();j++){
            if(grid[i][j]==1 || grid[i][j]==2){
                totalorange += 1;

                
            }
            if(grid[i][j] == 2){
                q.push(Pair(i,j,0));
            }

        }
    
    }
    int realtime;
    int count =0;
    while(q.size()>0){
        Pair took = q.front();
        q.pop();
        count++;

        
        realtime = took.time ;
       
       
        if(took.i+1<grid.size() && grid[took.i+1][took.j] == 1 ){   // down //

            grid[took.i+1][took.j]=2;
            q.push(Pair(took.i+1,took.j,took.time+1));



        }
        if(took.i-1>=0 && grid[took.i-1][took.j] == 1 ){   // up // 

            grid[took.i-1][took.j]=2;
            q.push(Pair(took.i-1,took.j,took.time+1));
            }
        if(took.j-1>=0 && grid[took.i][took.j-1] == 1 ){   // left //

            grid[took.i][took.j-1]=2;
            q.push(Pair(took.i,took.j-1,took.time+1));
            }
        if(took.j+1<grid[took.i].size() && grid[took.i][took.j+1] == 1 ){

            grid[took.i][took.j+1]=2;
            q.push(Pair(took.i,took.j+1,took.time+1));
            }
            


            }

            if(count<totalorange){
                cout<<"-1"<<endl;
            }
            else{
                cout<<"time"<<realtime<<endl;
            }



    }
};