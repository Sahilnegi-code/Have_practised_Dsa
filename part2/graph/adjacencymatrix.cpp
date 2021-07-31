// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
    // undirected graph
int edges , nodes;

cin>>edges>>nodes;

// DECLARE ADJACENCY MATRIX
int adj[nodes+1][nodes+1];
for(int i =0;i<edges;i++){
    int x,y;
    cin>>x>>y;
    adj[x][y] =1;
    adj[y][x]=1;

}
// if nodes is 10^5 , We cant use adjacency matrix
// space complexity of adjacency matrix is o(no of nodes^2);
return 0;
   }