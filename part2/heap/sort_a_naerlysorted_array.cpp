// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

 priority_queue<int , vector<int> , greater<int>> pq;
// push-->log(n);
// pop-->log(n);
// top-->o(1);
// size-->o(1);

int sortedSize =3;
int arrSize=9;
int arr[]={2,3,1,4,6,7,5,8,9};

for(int i=0; i<=sortedSize ;i++  ){

    pq.push( arr[i]);

}


for(int i = sortedSize+1;i<arrSize;i++){

    cout<<pq.top()<<endl;
    pq.pop();

    pq.push(arr[i]);


}
while(pq.size()>0){
    cout<<pq.top()<<endl;
    pq.pop();
}

// 1---stored in random order


    

return 0;
   }