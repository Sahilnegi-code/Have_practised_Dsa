#include<iostream>
#include<vector>
#include<cstring>
#include<string>

#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int ,int>>adj[],int node,int adjacent ,int weight){
    adj[node].push_back(make_pair(adjacent,weight));
    adj[adjacent].push_back(make_pair(node,weight));
}



class Pair{

public:
string     psf;

int vertex;
Pair(string path , int v){
    psf = path;
    vertex= v;

}
};



signed main(){
int noOfvertex = 7;
vector<pair<int ,int>> graph[noOfvertex];

    addedge(graph,0,1,10);
    addedge(graph,1,2,10);
    addedge(graph,2,3,10);
    addedge(graph,3,0,10);
    addedge(graph,3,4,10);
    addedge(graph,4,6,10);
    addedge(graph,4,5,10);
    addedge(graph,5,6,10);
    queue<Pair> q;
    Pair p(to_string(2)+" " , 2);
    q.push(p);
int arr[noOfvertex];
    memset(arr,0,sizeof(arr));
   
        //  2--3----4 
        //  |  |    | \
        //  1--0    5---6
    while(q.size()>0){
        // remove , mark , print , add
        Pair take = q.front();
        q.pop();
        if(arr[take.vertex] != 0){
            continue;

        }
        arr[take.vertex] =1;
        cout<<take.psf<<endl;
            for(auto x : graph[take.vertex] ){
                if(arr[x.first]==0){
                    Pair put(take.psf + to_string(x.first) + " " ,x.first );
                    q.push(put);
                }

            }

    }

cout<<"hello";



    return 0;
}



