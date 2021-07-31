







#include<iostream>
#include<vector>
#include<cstring>

#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int ,int>>adj[],int node,int adjacent ,int weight){
    adj[node].push_back(make_pair(adjacent,weight));
    adj[adjacent].push_back(make_pair(node,weight));
}
void    storingnoofgraph(int vertex ,int  visited[] , vector<pair<int ,int> >  graph[], vector<int > &component){

  visited[vertex]=0;
  component.push_back(vertex);

  for(auto x : graph[vertex]){

      if(visited[x.first]==-1){
  
      storingnoofgraph(x.first ,  visited ,   graph, component) ;

      }
  }







}
        
signed main(){

    int noOfVertex=7;
    vector<pair<int ,int>> graph[7];
    addedge(graph,0,1,0);
    addedge(graph,2,3,0);
    addedge(graph,4,5,0);
    addedge(graph,5,6,0);
    addedge(graph,6,4,0);

vector<vector<int>> components;
int visited[noOfVertex];
memset(visited,-1,sizeof(visited));
for(int i =0;i<noOfVertex;i++){
    if(visited[i]==-1){
        vector<int > component ;
        storingnoofgraph(  i ,visited,graph,component);

        components.push_back(component);



    } 
}
int sum =0;
int mult;
for(int i =0;i<components.size();i++){

     for(int j =i+1; j<components.size();j++){

         mult = components[0].size() *  components[j].size(); 
         sum = sum + mult;

     }
     

}
cout<<sum;

 



    return 0;
}



