#include<iostream>
#include<list>
using namespace std;
signed main(){

list <int>l1={1,3,2,7,243,24};
list <string>l2={"hello","sahil","negi"};   
cout<<l1.size()<<endl;
cout<<l2.size()<<endl;
l2.push_front("pogo");
l2.push_back(" hong kong ");
l2.pop_back();
for(auto x =l2.begin();x!=l2.end();x++){
    cout<<*x<<endl;
}
l1.sort();
l1.reverse();
l1.remove(24);
for(auto y = l1.begin();y!=l1.end();y++){

    cout<<*y<<endl;
}



return 0;
}