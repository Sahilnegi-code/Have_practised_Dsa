#include<iostream>
#include<vector>
#include<utility>
#include<stack>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int > graph[],int node , int neighbour){
    graph[node].push_back(neighbour);
    graph[neighbour].push_back(node);

}
class Pair{
    public:
string psf;
int vertex;
Pair(int v , string p){
vertex = v;
psf = p;
}

};
signed main(){
    int vertex = 7;
    bool visited[vertex];
    vector<int> graph[vertex];

    addedge(graph,0,1);
    addedge(graph,1,2);
    addedge(graph,3,2);
    addedge(graph,3,0);
    addedge(graph,3,4);
    addedge(graph,6,4);
    addedge(graph,5,4);
    addedge(graph,5,6);
    stack<Pair>  st;
    Pair p(0,"0 ");
    st.push(p);
    memset(visited,0,sizeof(visited));
    while(st.size()>0){
        Pair took = st.top();
        st.pop();
        if(visited[took.vertex] !=0 ){
            continue;
        } 

        visited[took.vertex] =1;
        if(took.vertex ==6){
            
        cout<<took.psf<<endl;
            
        }
        for(auto x: graph[took.vertex] ){

            if(visited[x]==0){
                Pair N(x,took.psf + to_string(x) +" ");
                st.push(N);

            }



        }
    }


    return 0;
}