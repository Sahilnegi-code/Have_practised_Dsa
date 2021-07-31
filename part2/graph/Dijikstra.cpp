#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void addEdge(  vector<pair< int  , int >> adj[], int node ,int nb ,int weight ){
adj[node].push_back(make_pair(nb,weight));
adj[nb].push_back(make_pair(node,weight));

}
class Pair{
    public:
    int vertex;
    string psf;
    int wt;
    Pair(int vertex , string path , int weight){

        this->vertex = vertex;
        psf = path;
        wt = weight;


    }
};

class comp{
    public:
   bool  operator() (Pair a , Pair b){
       if(a.wt>b.wt){
           return true;
       }
return false;
    }
};
// Dijkstra algo by priority-queue //
// priority_queue push and pop is log n 
int main(){
    int vertex = 7;
    vector<pair<int ,int>> graph[vertex];
    addEdge(graph,0,1,10);
    addEdge(graph,2,1,10);
    addEdge(graph,2,3,10);
    addEdge(graph,0,3,40);
    addEdge(graph,4,3,3);
    addEdge(graph,4,6,8);
    addEdge(graph,4,5,3);
    addEdge(graph,6,5,3);


priority_queue <Pair , vector<Pair>  ,comp > pq;
Pair p (0,0+" ",0);
pq.push(p);
bool visited[vertex];
memset(visited , 0, sizeof(visited));
while(pq.size()>0){
    Pair took = pq.top();
    pq.pop();
    if(visited[took .vertex] != 0 ){
        continue;
    }
    visited[took.vertex] =1;
    cout<<took.psf<<endl;
    for(auto x : graph[took.vertex]){

        if(visited[x.first]==0){

        Pair ver(x.first,took.psf +  to_string(x.first)+" ",took.wt+x.second);

            pq.push(ver);
        

        }
    }


}

    return 0;
}