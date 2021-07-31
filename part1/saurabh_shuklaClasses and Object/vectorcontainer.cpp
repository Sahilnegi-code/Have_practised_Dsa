#include<iostream>
using namespace std;
#include<vector>
// vector becomes double
// vector provide memory flexibility
int main(){
vector  <int> v1 ;
// zero length of vector but has capacity 1
vector<int> v2{10,20,30};
// 4 length vector is initialized
vector <int > v3(4);
// v4 has length 5 and keeping the same in 5 length is 123
vector<int> v4(5,123);
vector <char> v5={'a','v'};
vector <char> v6;

for(int i =0;i<v5.size();i++){

    cout<<v5[i]<<endl;
}
// cout<<v6[2];
v5.pop_back();
for(int i =0;i<v5.size();i++){

    cout<<v5[i]<<endl;
}
// capacity reduce nhi hoti from pop back 
cout<<v5.size();
v5.push_back(23);
cout<<v5.size();
cout<<endl;
vector <int> data = {1,2,3,4};
cout<<data.front()<<endl;
cout<<data.back()<<endl;
vector <int> :: iterator i=data.begin();
data.insert(i+1,6);

cout<<data[1];


    return 0;
}