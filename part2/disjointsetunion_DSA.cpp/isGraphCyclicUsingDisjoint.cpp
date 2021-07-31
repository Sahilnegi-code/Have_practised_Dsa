#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<utility>

using namespace std;
class node{
public:
int parent;
int rank;
};
vector<node> dsuf;  
void make_set(int V){

for(int i =0;i<V;i++){
    dsuf[i].parent =-1;
    dsuf[i].rank =0;
    }

}


// ---->  It is giving absolute parent




int find_set(int val){

    if(dsuf[val].parent==-1){
        return val;
    }
    return dsuf[val].parent=find_set(dsuf[val].parent);


}
// It is giving absolute parents


void union_set(int x , int y){
    

    int val1 = find_set(x);
    int val2 = find_set(y);

    // Union By Rank
            if(dsuf[val1].rank==dsuf[val2].rank){

                dsuf[val1].parent =  val2 ;
                dsuf[val2].rank = dsuf[val2].rank+1;




            }
            else if(dsuf[val1].rank>dsuf[val2].rank){
                dsuf[val2].parent = val1;
            }
            else{
                 dsuf[val1].parent =  val2;
            }
    // Union By Rank



    




}








int main(){
    int E;
    int V; // no of vertex is 0 to v-1;
    cin>>E>>V;
    dsuf.resize(V);


vector<pair<int,int>> adj_list;

for(int i =0;i<E;i++){
    int from,to;
    cin>>from>>to;
    adj_list.push_back(make_pair(from,to));
    }


    return 0;
}
