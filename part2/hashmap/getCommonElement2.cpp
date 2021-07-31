// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;
void print(unordered_map<int ,int> &hp ){






    for(auto x :hp){
        cout<<x.first << " " << x.second <<endl;
    }






}
int main() {

    int arr[]={1,3,5,5,3,3};
    unordered_map <int,int> hm ;
    for(int i =0;i<6;i++){

        int arrval = arr[i];
        if(hm.count(arrval)>0){
            int val = hm.at(arrval);
            int newVal = val +1;
            hm[arrval] = newVal;

        }
        else{
            hm[arrval] = 1;
        }


    }
    int arr1[] ={3,3,1,5,1};
  for(int i =0;i<5;i++){
      int val = arr1[i];
      if(hm[val]>0 && hm.count(val)){
          cout<<val<<" ";
          int hmv=hm.at(val);
          hmv= hmv-1;
          hm[val]=hmv;

      }   
  }
    

return 0;
   }