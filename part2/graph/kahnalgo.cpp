#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class solution{
public:
vector<int> topologicalsort(int N , vector <int >  adj[]){
queue<int> q;
vector<int> indegree(N,0);
for(int  i =0;i<N;i++){
    for(auto x:adj[i]){
      indegree[x]= 1+  indegree[x];
    }
}
for(int i =0;i<N;i++){
    if(indegree[i]==0){
        q.push(i);
    }
}
vector<int> toposort;

while(!q.empty()){
int took = q.front();
q.pop();
toposort.push_back(took);
for(auto  x:adj[took]){
    indegree[x] = indegree[x] -1;
    if(indegree[x]==0){

        q.push(x);

    }
}
}











}
};
signed main()
{

    return 0;
}