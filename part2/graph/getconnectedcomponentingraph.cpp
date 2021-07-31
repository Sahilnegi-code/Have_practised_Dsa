#include<iostream>
#include<vector>
#include<cstring>

#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int ,int>>adj[],int node,int adjacent ,int weight){
    adj[node].push_back(make_pair(adjacent,weight));
    adj[adjacent].push_back(make_pair(node,weight));
}
void drawtreegraph(vector<pair<int ,int>> adj[],int i,vector<int> &component , int visited[] ){
visited[i] =0;
component.push_back(i);
for(auto x: adj[i]){
if(visited[x.first]==-1){
    drawtreegraph( adj, x.first, component ,  visited );

}
}


}
signed main(){

//     int noOfVertex=7;
//     vector<pair<int ,int>> graph[7];
//     addedge(graph,0,1,0);
//     addedge(graph,2,3,0);
//     addedge(graph,4,5,0);
//     addedge(graph,5,6,0);
//     addedge(graph,6,4,0);
// int visited[noOfVertex] ;
// vector<vector<int>> components;
\
// memset(visited,-1,sizeof(visited));
//  for(int i =0;i<noOfVertex;i++){
//      if(visited[i]==-1){
//          vector<int> component;
//          drawtreegraph(graph ,i,component,visited);
  
//          components.push_back(component);
//      }
//  }

//  for(int i =0;i<components.size();i++){
// for(int j =0;j<components[i].size();j++){
//     cout<<components[i][j]<<" ";
// }
// cout<<endl;

//  }

 
// By default boolean array zero 
vector<int> arr[4];
cout<<arr[3][0];



    return 0;
}



