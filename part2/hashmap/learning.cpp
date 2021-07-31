// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<map>
#include<string>
using namespace std;
void print (map <int , string> &m ){
for(auto hm :m){
    cout<< hm.first << " " << hm .second<<endl;   

}

     }


int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
// unordered_map <string,int> ourMap;
// insert 
// pair<string,int> p("hello",1);
// ourMap.insert(p);    
// ourMap["hellow "]=1;
// ourMap["go"]= 2;
// cout<<ourMap["hello"];

// cout<<ourMap.at("go");
// cout<<ourMap.at("jiyo");
// cout<<ourMap["lol"];

// for accesss
// use ourMap.at()
// check presence
// if(ourMap.count("lol")>0){
//     cout<<"yes this is present"<<endl;
// }
// cout<<endl<<ourMap.size()<<endl;


// for erasing 
// if(ourMap.erase("lol")>0){
//     cout<<"present";
// }
map <int ,string> hm;
hm[1]="sahil";
hm[4]="negi";
hm[9]="i";
hm[2]="ni";
for(auto x :hm){
    cout<<x.first<< " " << x.second<<endl;

}
// in ordered map 
// in insertion o(log n ) , time complexity work
// in insertion if no value is given to key then by default value is inserted  just like in integer value 0 zero is inserted
// hm[9];// if we declared then o(log n) tiem complexity is there
// keys are unique 
// insertion,access ---> o(log n)
map<int ,string> h;
h[1]="hello";

h[0] ="gain";
h[-2]= "jain";
// auto it = h.find(1);
// if(it==h.end()){
//     cout<<"no value";
// }
// else{
//     cout<<it->first << " "<< it->second; 
// }
h.erase(-2); // o(log n) n is map size.
h.clear(); // o(log n)
print(h);




    return 0;
}
// unordered map works in o(1) in average case . 
// o(n) in worst case.
// no ordering
