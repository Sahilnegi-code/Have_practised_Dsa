// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

 priority_queue<int , vector<int>> p;
 p.push(1);
 p.push(2);
 p.push(3);
 cout<<p.top()<<endl;
p.pop();

priority_queue<int , vector<int>,greater<int>> npm;
 npm.push(2);
 npm.push(1);
 npm.push(3);

 cout<<npm.top()<<endl;

// push-->log(n);
// pop-->log(n);
// top-->o(1);
// size-->o(1);



// 1---stored in random order


    

return 0;
   }