#include<iostream>
#include<vector>
#include<cstring>

#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int ,int>>adj[],int node,int adjacent ,int weight){
    adj[node].push_back(make_pair(adjacent,weight));
    adj[adjacent].push_back(make_pair(node,weight));
}
void printGraph(vector<pair<int ,int>> adj[] ,int totalNode){

for(int i =0;i<totalNode;i++){
    cout<<"node "<<i<<" make an edge with\n";
    for(auto x = adj[i].begin();x!=adj[i].end();x++){
        int adj =x->first;
        int wt=x->second;
        cout<<"node "<<adj<<" with weight " << wt<<endl; 
        


    }


}

}

bool hasPath(int arr[] , vector<pair<int ,int >> graph[] ,int src ,int  dest){
    if(src ==dest){
        return true;
    }
    arr[src]=0;
    //   cout<<src<<endl;
    for(auto x: graph[src]){
        //   cout<<src<<endl;
        if(arr[x.first]==-1){
           
        bool haveFindPath= hasPath(arr , graph ,x.first , dest);
    
        if(haveFindPath==true){ 
            return true;


        }

        }

    }
    return false;
}

int main(){

    int noOfVertex=7;
    vector<pair<int ,int>> graph[7];
    addedge(graph,0,3,10);
    addedge(graph,1,2,10);
    addedge(graph,2,3,10);
    addedge(graph,0,1,10);
    addedge(graph,4,3,10);
    addedge(graph,4,5,10);
    addedge(graph,5,6,10);
    addedge(graph,4 ,6,10);
 int src = 0;
 int dest =6;
int arr[dest+1];
 memset(arr,-1,sizeof(arr));
 cout<<hasPath(arr,graph,src,dest);
 
 
// By default boolean array zero 




    return 0;
}