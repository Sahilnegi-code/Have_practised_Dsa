// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main() {
// Adjacency List
int edges ,  vertex;
cin>> edges>>vertex;
vector<int> adj[vertex+1];
for(int i =0;i<vertex;i++){
    int x, y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

    
return 0;
   }