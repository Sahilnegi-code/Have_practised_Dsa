# include<bits/stdc++.h>
using namespace std ;
#include<array>
int main(){
array<int ,7> data ={12,20,40,21};
cout<<data.at(2)<<endl<<data[2]<<endl;
cout<<data.front()<<endl<<data.back()<<endl;
data.fill(20);
array<int ,7>fun;
fun.fill(10);
fun.swap(data);

for(int i =0;i<data.size();i++){
    cout<<data[i]<<endl;
}
for(int i =0;i<fun.size();i++){
    cout<<fun[i]<<endl;
}
// siz efunction returns the size of an array
    return 0;
}

// STL is a standard template library

// 1-container-->vector
// 2-algorithm
// 3-iterators
// container library is a collection classes
