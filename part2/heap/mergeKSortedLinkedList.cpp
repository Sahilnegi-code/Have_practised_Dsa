#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

class Pair{
public:
int listi;
int datai;
int val;



Pair(int li ,int di , int val){
    listi=li;
    datai = di;
    this->val =val; 

}

Pair(){

}

};


class comparator{
public:
bool operator() (Pair &a , Pair &b){
    if(a.val>b.val){
        return true;

    }
    else{
        return false;
    }
    
}
};
signed main()
{
    priority_queue<Pair,vector<Pair>,comparator> pq; 
    vector <vector<int> > List={
        {8,20,30}
        ,{1,2,5},
        {6,9,10}
        }; 
    vector <int> v;
    // for(int i =0; i<List.size();i++){
    //     Pair p(i,0,List[i][0]);
    //     pq.push(p);
    // }
    Pair p (1,2,3);
        pq.push(p);
        Pair t = pq.top();
        Pair &c = t;
        






    // while(pq.size()>0){
    //     // here I am not able to take reference 
    //      Pair &T = pq.top();  // error is coming
    //     // here I am not able to take reference 
    //     v.push_back(p.val);
    //     p.di++;
    //     pq.pop();
    //     if(p.di<list[p.li].size()){
            
    //     }
    // }











    return 0;
}
