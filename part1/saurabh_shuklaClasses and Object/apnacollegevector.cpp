#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector <int> &v1 ){
    // v1.pop_back();
    for(int i =0;i<v1.size();i++){
        cout<<v1[i];
    }
// v1.pop_back();
}
int main(){
// vector <int>v;
// v.push_back(3);
// v.push_back(5);
// v.push_back(4);
// v.push_back(2);


// vector<int> :: iterator it;
// for(it=v.begin();it!= v.end();it++){
//     cout<<*it;

// }
// cout<<endl;
// for(auto element:v){
//     cout<<element<<endl;
// }
// vector <int> v2(3,50);
// it gives 50,50,50

 vector <int> v1 ;
 vector <int> v2 ;
 int w;
//  vector is similar to array;
for(int i =0;i<4;i++){
    cin>>w;
    v1.push_back(w);
}

display(v1);

// for(int i =0;i<4;i++){
// cout<<v1[i];
// }

vector <int> :: iterator iter = v1.begin();
cout<<endl;
v1.insert(iter,2,133);
display(v1);
// v1.erase()
// vector <int>v3(4);-->this is 4 element vector.
//  vector <int>v3(4,55);-->this is 4 element vector.
  /* Remove first two element */
//    v.erase(v.begin(), v.begin() + 2); for removing










return 0;
}