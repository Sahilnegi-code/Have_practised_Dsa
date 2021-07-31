#include<iostream>
// list class is bodirectional ,linear list.
// array , vector is also a linear list
// vector is dynamic linked list
// list can be accessed sequentially
    #include<list>
    using namespace std;    
int main(){
list <int> l1 {11,32,34};
list <string> l2 {"sahil","negi","goat"};
l2.push_back("vaibhav");
l2.push_front("hello");
l2.pop_back();
l2.reverse();
// l1.sort
l2.remove("goat");
// l2.clear();poora clear
list <string>:: iterator p=l2.begin();
// u cannot use access directly by []
// u can go from from to end or end to front


while(p!=l2.end()){ 
    cout<<*p<<endl;
    p++;
}

cout<<"the total value is--->"<<l2.size();
cout<<endl;


// int arr[]={12,53,343,1};

// int *v=arr;
// for (int i = 0; i <= 3; i++)
// {
//     cout<<*(v)<<endl;
//     v =v+1;
// }







    return 0;
}