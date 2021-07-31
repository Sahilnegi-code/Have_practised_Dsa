#include<iostream>
#include<cstring>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
void addedge(vector<int> adj[],int node ,int neighbour){
adj[node].push_back(neighbour);

}
void topologicalsort(  vector<int > adj[] ,int i , stack<int>&st  , bool visited[]      ){
    if(adj[i].size()==0){
        visited[i] = 1;
        st.push(i);
        return ;
    }


visited[i] =1;



for(auto x : adj[i]){

if(visited[x]==0){

topologicalsort(adj,x,st,visited);

}
}

st.push(i);
return;


}

signed main(){
    int vertex = 7 ; 
    vector<int > adj[vertex];
    addedge(adj,0,3);
    addedge(adj,0,1);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,4,3);
    addedge(adj,4,5);
    addedge(adj,4,6);
    addedge(adj,5,6);

    stack <int> st;
    bool visited[vertex];
    memset(visited,0,sizeof(visited));

    for(int i =0;i<vertex ;i++){
        if(visited[i]==0){
            
            topologicalsort(adj,i,st ,visited);
        }
    }
while(st.size()>0){
    cout<<st.top()<<endl;
    st.pop();

}

    return 0;
}
