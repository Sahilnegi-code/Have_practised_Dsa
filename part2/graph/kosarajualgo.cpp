#include<iostream>
#include<cstring>
using namespace std;
#include<vector>
#include<stack>
#include<bits/stdc++.h>

void makedirectrdgraph(vector<int> adj[],int node ,int nb){
    
    adj[node].push_back(nb);

}
void DFS( int i , vector<bool>  &visited, stack<int> &st,vector<int> adj[]) {
    // cout<<"hello2"<<endl;

visited[i] =true;
for(auto x: adj[i]){
    if(visited[x] != 1  ){
        DFS(x,visited,st,adj);
    }
}
st.push(i);




}
void reverse(int V ,vector<int> rev[],vector<int> adj[]){
    // cout<<"hello1"<<endl;
    for(int i =0;i<V;i++){

        for(auto x : adj[i]){

rev[x].push_back(i);


        }


    }

}
void DFS2( int i , vector <int> rev[] , vector<bool>  &visited       ){
    // cout<<"hello"<<endl;
    cout<<i;
    visited[i]=true;
    for(auto x: rev[i]){
        if(visited[x] == false ){
            DFS2(x,rev,visited);
        }
    }

}
void findscc(int V , vector<int> rev[] , vector<int> adj[]){
    stack<int > st;
    vector<bool> visited(V,false);
    for(int i =0;i<V;i++){
        if(visited[i]==0){
            DFS(i,visited,st,adj);

        }
    }
// cout<<"this ";
    reverse(V,rev,adj);
 for(int i =0;i<V;i++){
     visited[i]=false;
 }
   
  
    while(!st.empty()){
            int get = st.top();
            st.pop();
            if(visited[get] ==false){
                DFS2(get,rev,visited);
                cout<<endl;
            } 
            
    }


}

signed main(){
    int vertex =8;
    vector<int> adj[vertex];
    vector<int > rev[vertex];
    makedirectrdgraph(adj,0,1);
    makedirectrdgraph(adj,1,2);
    makedirectrdgraph(adj,2,0);
    makedirectrdgraph(adj,2,3);
    makedirectrdgraph(adj,3,4);
    makedirectrdgraph(adj,4,5);
    makedirectrdgraph(adj,5,6);
    makedirectrdgraph(adj,6,7);
    makedirectrdgraph(adj,6,4);
    makedirectrdgraph(adj,4,7);
    findscc(vertex,adj ,rev);
 
    return 0;
}
