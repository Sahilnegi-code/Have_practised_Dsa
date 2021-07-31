#include<bits/stdc++.h>
#include <map>
using namespace std;
int main(){
map <int,string> customer;
 customer[100]="sahil";
 customer[120]="Negi";
 customer[130]="Vaibhav";
 customer[140]="jha";
 map <int ,string> c{
{100,"sahil"},{120,"negi"},
 {130,"vaibhav"},{200,"joti rao"}
 };
 cout<<customer[100]<<endl;
// cout<<customer[140];
map <int ,string>:: iterator p = customer.begin();
// while(p!=customer.end()){
//     cout<<p->second<<endl;
//     p++;
// }
cout<<customer.size()<<endl;
cout<<customer.empty();
customer.insert( pair < int,string>{ 124,"gyan"});

while(p!=customer.end()){
    cout<<p->second<<endl;
    p++;
}
    return 0;
}