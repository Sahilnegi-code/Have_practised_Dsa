#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &a){
    a.pop_back();
}
int main(){
  vector<int> v1 {5,6};
    display(v1);
    cout<<v1[0]<<endl<<v1[1];
    return 0;
}