#include<iostream>
#include<vector>
using namespace std;


void make_set(int val,vector<int> &parent){
    parent[val]=val;
}
int find_set(int val , vector<int >&parent){
    if(val == parent[val]){
        return val;
    }

    return parent[val] =find_set(parent[val],parent);

}
void union_sets(int val1 , int val2, vector<int> &rank, vector<int> &parent ){
    int x= find_set(val1,parent);
    int y = find_set(val2,parent);
    if(rank[x]==rank[y]){
        parent[x]=y;
        rank[y]=rank[y]+1;

    }
    else if(rank[x]<rank[y]){

        parent[x]=y;
    }
   else{
       parent[y] =x;

   }

}
 int main(){
int noofnodes =6 ;
vector<int> parent(noofnodes,-1);


     vector<int> rank(noofnodes,0);
make_set(1,parent);
make_set(2,parent);
make_set(3,parent);
make_set(4,parent);
make_set(5,parent);
union_sets(1,2,rank,parent);
union_sets(3,4,rank,parent);
union_sets(5,4,rank,parent);
union_sets(2,5,rank,parent);
union_sets(2,1,rank,parent);
cout<<find_set(2,parent);
cout<<find_set(1,parent);
cout<<find_set(3,parent); 
// for(auto x:rank){
//     cout<<x<<endl;
// }
     
   

     return 0;
 }