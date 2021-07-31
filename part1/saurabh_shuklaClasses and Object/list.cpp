#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list <int> l1{11,25,1,356,22,33};
    list <string> l2{"india","sher","kon"};
    l1.reverse();
    l2.pop_back();
    l2.pop_front();
    // l2.push_front("munch");
    list<int>::iterator p=l1.begin();
    l1.remove(356);
    l1.clear();
    // l2.push_back("nepal");
    while(p!=l1.end()){
        cout<<*p<<endl;
        p++;
    }
    cout<<l2.size();
    
    return 0;
}