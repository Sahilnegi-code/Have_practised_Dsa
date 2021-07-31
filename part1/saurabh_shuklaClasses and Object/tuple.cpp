#include<bits/stdc++.h>
#include<tuple>
using namespace std;
// tuple is used to keep  multiple values   
int main(){
    tuple<string ,int,int> t1;
    t1 = make_tuple("sahil negi " ,18 ,50);
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    

    return 0;
}