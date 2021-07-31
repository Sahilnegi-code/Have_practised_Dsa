#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void call(vector<vector<int>> graph, vector<vector<int>> &visited , int i ,int j ){
    if( i<0 || j<0 || i==graph.size() || j == graph[i].size() || visited[i][j] ==1 || graph[i][j]== 1   ){
        return ;
    } 
    visited[i][j]=1;
call(graph,visited,i,j+1);
call(graph,visited,i,j-1);
call(graph,visited,i-1,j);
call(graph,visited,i+1,j);


}
int main(){
    vector<vector<int>> graph ={
        {0,0,1},
        {1,0,0},
        {1,1,1},
        {0,0,0}

    };
    vector<vector<int>> visited ={
        {0,0,0},
        {0,0,0},
        {0,0,0},
        {0,0,0}
    }  ;
    int count =0;
    for(int i =0;i<graph.size();i++){


        for(int j = 0;j<graph[i].size();j++){
            if(graph[i][j]==0 &&  visited[i][j] ==  0){

                call(graph,visited,i,j);
                count ++;





            }
        }



    }
    cout<<count;
    return 0;
}