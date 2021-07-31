#include<iostream>
#include<vector>
#include<cstring>
#include<string>



using namespace std;
 void addedge(vector<int>adj[],int node,int adjacent ){
            adj[node].push_back(adjacent);
            adj[adjacent].push_back(node);
        }
        void hamiltonian(vector<int> adj[] , int i , int visited[], int count ,string ans ,int vertex ,int orgsrc){
         
visited[i] =1;
for(auto x : adj[i]){
    if(visited[x]==0){
        hamiltonian(adj,x,visited,count+1,ans + to_string(i),vertex,orgsrc);
        visited[x]=0;

    }
}
if(count==vertex){
    cout<< "hamiltonian path --->"<< ans+to_string(i)<<endl;
}
if(count==vertex){
   for(auto x: adj[orgsrc])
   if(ans[ans.length()-1]==x){
    cout<< "hamiltonian cycle --->"<< ans+to_string(i)<<endl;

   }
}

        }
int main(){
      int vertex = 7;
      int visited[vertex];
      memset(visited,0,sizeof(visited));
            

        vector<int > adj[vertex];
        int orgsrc = 0;
        addedge(adj,0,3);
        addedge(adj,0,1);
        addedge(adj,2,1);
        addedge(adj,2,3);
        addedge(adj,3,4);
        addedge(adj,2,5);   
        addedge(adj,4,5);
        addedge(adj,6,5);
        addedge(adj,6,4);
        hamiltonian(adj,0,visited,1,"",vertex,orgsrc);


    return 0;
}