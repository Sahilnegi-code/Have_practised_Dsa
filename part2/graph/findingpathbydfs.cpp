#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void addEdge(  vector<pair< int  , int >> adj[], int node ,int nb ,int weight ){
adj[node].push_back(make_pair(nb,weight));
adj[nb].push_back(make_pair(node,weight));

}


void printpath(vector<pair<int ,int>> adj[] ,int src ,int des , int visited[] , string pathprint){

if(src==des){
    cout<<pathprint<<endl;
    return ;
}

visited[src]=0;

for(auto x :adj[src]){


    if(visited[x.first]==-1){

printpath(adj,x.first,des,visited,pathprint+to_string(x.first)  +" ");

}

}

visited[src]=-1;
}

int main(){
int noofvertex = 9;

vector< pair<int ,int> > adj[noofvertex];
addEdge(adj,0,3,10);
addEdge(adj,0,1,10);
addEdge(adj,1,2,10);
addEdge(adj,3,2,10);
addEdge(adj,3,4,10);
addEdge(adj,2,5,10);
addEdge(adj,4,5,10);
addEdge(adj,4,6,10);
addEdge(adj,5,6,10);
int visited[6+1];
string pathprint;
memset(visited,-1,sizeof(visited));
printpath(adj,0,6,visited , to_string(0) + " ");

    return 0;
}