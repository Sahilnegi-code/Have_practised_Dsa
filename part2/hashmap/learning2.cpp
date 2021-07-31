#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print (unordered_map <int , string> &m ){
for(auto hm :m){
    cout<< hm.first << " " << hm .second<<endl;   

}

     }
int main(){
    unordered_map<int ,string > hm;
    hm[1]="sahil";
    hm[2] ="den";
    hm[10]="fss";
    hm[4]="negi";
    print(hm);
    // insertion and access is o(1); --->average time complexity/
    // for implementaion hash table is used 
    // if ordered is not matter then unordered_map is used as time is saving
    // we cant put complex dataType in unordered_map 


        return 0;
}