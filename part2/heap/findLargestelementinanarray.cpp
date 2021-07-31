// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

 priority_queue<int , vector<int> , greater<int>> m;
// push-->log(n);
// pop-->log(n);
// top-->o(1);
// size-->o(1);

int k =3;
int arrSize=6;
int arr[]={1,34,21,65,2,5};
for(int i =0;i<k;i++){
   m.push(arr[i]);
}
for(int i = k;i<arrSize;i++){
   if(arr[i]>m.top()){
      m.pop();
      m.push(arr[i]);
         }

}
while(m.size() > 0){
   cout<<m.top()<<endl;
   m.pop();

}


// 1---stored in random order


    

return 0;
   }