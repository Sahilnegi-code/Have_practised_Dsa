#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class edge{
public:
int weight;
int neighbour;
int node;
edge(int n ,int nb ,int wt ){
    node = n;
    neighbour = n;
    weight = wt;



}
};


signed main(){
    int nodes = 4  ;
vector<edge> adj;
int visited[nodes];
adj.push_back(edge(1,2,-5));
adj.push_back(edge(1,3,-2));
adj.push_back(edge(0,1,1));
for(int i =1;i<nodes;i++){
visited[i]=INT_MAX;
}

visited[0]=0;
for(int i =1;i<=nodes-1;i++ ){
    for(auto x : adj){
        if(visited[x.node] != INT_MAX && visited[x.node ]+ x.weight <visited[x.neighbour]  ){
        
            visited[x.neighbour] = visited[x.node] + x.weight;
            cout<<visited[x.neighbour]<<endl;
        }
    }
}
int count = 0;
for(auto x :adj){

    if(visited[x.node]+x.weight< visited[x.neighbour]){
        cout<<"negative weight ";
        count++;
        break;
    }

}
if(!count){
for(int i =0;i<nodes;i++ ){
cout<<i << "->" << visited[i]<<endl;
}
}


// for(int i =0;i<nodes;i++){
//     cout<<visited[i]<<endl;
// }

    return 0;
}