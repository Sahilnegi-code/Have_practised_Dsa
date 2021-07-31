// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;
void print(unordered_map<int , bool> &hp ){






    for(auto x :hp){
        cout<<x.first << " " << x.second <<endl;
    }






}
int main() {

    int arr[]={1,3,5,5,3,3};
    unordered_map <int,bool> hm ;
    for(int val:arr){
        hm[val] =true;
    }
for(int val :arr){
    if(hm.count(val-1)>0){
        hm[val] =false;
}
}
int maxLen =0;
int msp =0;
for(int val:arr){
    if(hm.at(val)==true){
        int value = val;
        int len =1;
        while(hm.count(value+len)>0){
            len ++;

        }
        if(len>maxLen){
            maxLen =len;
            msp = value;
            }

    }
}














    

return 0;
   }