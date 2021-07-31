// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";unordered_map <string,int> ourMap;
// insert 


string str = "assk";
unordered_map <char , int > hm;
for(int i =0;i<str.size();i++){
    char ch = str[i];
    if(hm.count(ch)>0){
        int of = hm.at(ch);
        int nf = of+1;
        hm[ch]=nf;


    }
    else{
        hm[ch]=1;
    }
}
for(auto x:hm){
    cout<<x.first << " "<<x.second<<endl;
}
char hfc = str[0];
for(auto itr = hm.begin();itr!= hm.end();itr++){
    if(itr->second > hm[hfc]){
        hfc = itr->first;
    }


}
cout<<hfc;
    return 0;
}
// unordered map works in o(1) in average case . 
// o(n) in worst case.
// no ordering
