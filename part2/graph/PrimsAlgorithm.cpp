#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int ,int>>adj[],int node,int adjacent ,int weight){
    adj[node].push_back(make_pair(adjacent,weight));
    adj[adjacent].push_back(make_pair(node,weight));
}


class Pair{
  public:
    int vertex;
    int connected;
    int weight ;
    Pair(int v , int c ,int w){
        vertex = v;
        connected = c;
        weight = w;


    }
    Pair(){

    }
};

class Comp{
    public:
    bool operator()(Pair a ,Pair b)
    {
        if(a.weight>b.weight){
            return true;
        }
        return false;
    }
};


signed main(){
int noofvertex =7;
vector<pair<int ,int>>graph[noofvertex];
addedge(graph,0,3,23);
addedge(graph,0,1,10);
addedge(graph,2,1,10);
addedge(graph,3,2,10);
addedge(graph,3,4,2);
addedge(graph,5,4,3);
addedge(graph,5,6,5);
addedge(graph,4,6,2);
bool visited[noofvertex] ;
memset(visited,0,sizeof(visited));
priority_queue<Pair,vector<Pair>,Comp> pq;
Pair p(0,-1,0);
pq.push(p);
while(pq.size()>0){
    Pair take = pq.top();
    pq.pop();
    if(visited[take.vertex] !=0){
        continue;
    }


    cout<<take.vertex<< " connected with-"<< take.connected <<"@"<<take.weight<<endl;
 
    visited[take.vertex]  =1;
    for(auto x : graph[take.vertex] ){
        if(visited[x.first] ==0){
            Pair E(x.first,take.vertex,x.second);
            pq.push(E);
        }

    }

}






    return 0;
}



