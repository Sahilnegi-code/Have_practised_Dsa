#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Pair{
    public:
    string path; 
    int sum;
    Pair(string path ,int sum){
        this->path=path;
        this->sum=sum;
        }


};

class comp{
    public:
bool operator() ( Pair a ,Pair b ){

    if(a.sum>b.sum){
        return true;

    }
    return false;
    //  chota wala aga ayega  

}
};
void addEdge(  vector<pair< int  , int >> adj[], int node ,int nb ,int weight ){
adj[node].push_back(make_pair(nb,weight));
adj[nb].push_back(make_pair(node,weight));

}
static int  minsum =  INT_MAX  ;//  +ve  infinity ..
static string minsumpath;
static int maxsum = INT_MIN;
static string maxsumpath ;
const int criteria = 39;
static int ceilsum ;
static string ceilpath;
static int floorsum;
static string floorpath;
 static priority_queue<Pair,vector<Pair>,comp> pq;
 const int k =3;
void printpath(vector<pair<int ,int>> adj[] ,int src ,int des , int visited[] , string pathprint,int sum){

if(src==des){
    cout<<pathprint<<endl;
if(sum < minsum){
    minsum = sum;
    minsumpath = pathprint;
}
if(sum>maxsum){
    maxsum = sum;
    maxsumpath = pathprint ;
}
if(criteria <sum && maxsum>sum ){
    ceilsum=sum;
    ceilpath = pathprint ;
}
if(minsum<sum && criteria>sum){
    floorsum =sum;
    floorpath = pathprint; 
    }
    if(pq.size()<k){

        pq.push(Pair(pathprint,sum));
    }
    else{
        if(sum>pq.top().sum){
            pq.pop();
            pq.push(Pair(pathprint,sum));

        }
    }
return ;
}

visited[src]=0;

for(auto x :adj[src]){


    if(visited[x.first]==-1){

printpath(adj,x.first,des,visited,pathprint+to_string(x.first)  +" ",sum + x.second);

}

}

visited[src]=-1;
}

int main(){
int noofvertex = 8;


vector< pair<int ,int> > adj[noofvertex];
addEdge(adj,0,1,10);//2
addEdge(adj,0,3,40);//1
addEdge(adj,1,2,10);//3
addEdge(adj,3,2,10);//4
addEdge(adj,3,4,2);//5
addEdge(adj,6,4,8);//6
addEdge(adj,5,4,3);//7
addEdge(adj,5,6,3);//8
int visited[6+1];
string pathprint;
int sum =0;
memset(visited,-1,sizeof(visited));
printpath(adj,0,6,visited , to_string(0) + " ",sum);
// cout<<minsumpath<<endl;
// cout<<maxsumpath<<endl;
// cout<<ceilpath;
cout<<pq.top().sum;
    return 0;
}