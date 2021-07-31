#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 void addedge(vector<int>adj[],int node,int adjacent ){
            adj[node].push_back(adjacent);
            adj[adjacent].push_back(node);
        }
        class Pair{
            public:
            int src;
            string path;
            int level;
            Pair(int s ,string p , int l){
                src = s;
                path =p;
                level = l;


            
            }

        };

bool bipartite(vector<int> adj[] , int src , int visited[]){

queue<Pair> q;
q.push(Pair(src,to_string(src),0));

    while(q.size()>0){

    Pair took = q.front();
    q.pop();
    if(visited[took.src] != 0 ){
        if(took.level !=visited[took.src] ){
            return false;
        }
    }
    else{
    visited[took.src]=took.level;

    }
    for(auto x: adj[took.src]){
        if(visited[x] == 0){
            q.push( Pair(x , took.path+to_string(x) , took.level+1 )  );
        }
    }


    
     }

return true;




}

signed main()
{
    int vertex = 7;
        vector<int > adj[vertex];
        int visited[vertex];
        memset(visited,0,sizeof(visited));

        // square
        addedge(adj,0,1);
        addedge(adj,0,3);
        addedge(adj,2,3);
        addedge(adj,2,1);
        // square

        // triangle

        addedge(adj,4,5);
        addedge(adj,5,6);
        addedge(adj,7,6);
        addedge(adj,7,4);
        // triangle

        for(int i =0;i<vertex;i++){

            if(visited[i]==0){
             bool isbipartite =   bipartite(adj,i,visited);
             if(isbipartite==false){
                 cout<<false;
                 return 0 ;
             }
            }

        }
cout<<true;




    return 0;
}