#include<iostream>
#include<bits/stdc++.h>
#include<list>
#include<vector>
#include<queue>

using namespace std;
bool comp(int a ,int b){
    return a>b;
}

class student{
    public:
    int roll;
    string name;
    int marks;
    student(int r , string n , int m){
roll = r;
name = n;
marks = m;
}
};
class comparator{
public:
// first argument ydi bda then secong arg then ydi true kiya to ulta hoga
// ydi first arg ka lia condition shi a rha rhi to hmesha false return kro
bool operator() (student a ,student b){
    return a.marks>b.marks;
}
};
signed main(){

student s1(12 ,"sahil negi",99);
student s2 (20 ,"jatin Anand ",100); 
student s3 (34 ," jakky Anand ",94); 

priority_queue<student ,vector <student> , comparator > q;
q.push(s1);
q.push(s2);
q.push(s3);

while(!q.empty()){
student x = q.top();
cout<< x.name <<" --->" << x.marks <<endl;
q.pop();
}


    // Comparator

// comparator btata hai ki shi order ma hai to sort krna ki jarurat nhi
// comapartor fun ya btata hai sort shi order ma hai ya nhi
// comparator sa ydi false aaya to sort ko btayega ki j=ki shi krdo
// vector <student> s;
// s.push_back(s1);
// s.push_back(s2);

// s.push_back(s3);
// sort(s.begin(),s.end(),comparator);
// for (auto  x:q){
// cout<< x.name <<" --->" << x.marks <<endl;
// }

// vector<int> v;
// v.push_back(2);
// v.push_back(6);
// v.push_back(3);
// v.push_back(1);
// v.push_back(7);
// sort(v.begin(),v.end(),comp);
// for(int x :v){
//     cout<<x<<endl;

// }
    // Comparator


















return 0;
}