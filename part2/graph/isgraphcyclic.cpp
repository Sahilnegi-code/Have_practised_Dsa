#include<bits/stdc++.h>
using namespace std;



void  addedge(vector<int> graph[] ,int node , int adj ){
    graph[node].push_back(adj);
    graph[adj].push_back(node);

}
 bool   iscyclic(vector<int> graph[],int v, bool visited []){



     queue<int> q;
    q.push(v);
    while(q.size()>0){
        int value = q.front();
        q.pop();
        if(visited[value] !=0){
           return true; 
        }
        visited[value] =1;
        for(auto x : graph[value]){
            if(visited[x] == 0 ){

                q.push(x);

            }
        }


    }


    return false;





}

signed main(){
    int noofvertex = 8;
    vector<int> graph[noofvertex]; 
    addedge(graph,0,1);
    addedge(graph,3,2);
    addedge(graph,4,5);
    addedge(graph,4,7);
    addedge(graph,5,6);
    addedge(graph,6,7);
    bool visited[noofvertex];
    bool cycle;
    memset(visited,0,sizeof(visited));
     for(int v =0; v<noofvertex;v++){
         if(visited[v]==0){
             cycle = iscyclic(graph,v,visited);
             if(cycle){
                 cout<<"true";
                 break;
             }
         }
    }
    if(cycle){

    }
    else{

cout<<"false";
    }
    return 0;
}