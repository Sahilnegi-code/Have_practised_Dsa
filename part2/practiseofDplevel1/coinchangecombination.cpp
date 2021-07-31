//  ####### combination is printed   ########
//  Here is only recursion is happened 
 

//  #######  MEMSET ######


 #include<iostream>
 #include<bits/stdc++.h>
 #include<cstring>
#include <unordered_map>
 using namespace std;
 int ans( int arr[],int size ,int sum ,int idx,unordered_map<string,int> hm  ){
     if(sum==0){
         return 1;
  
     }
     if(sum<0){

         return 0;
     }

string key = to_string(sum) +to_string(idx);
if(hm.count(key)){
return hm.at(key);

}




     int total =0;


    
for(int i =idx ;i<size;i++){
    total = total + ans(arr,size,sum-arr[i],i,hm);
    
}
pair <string,int> p(key,total); 
hm.insert(p);
return total ;
 

 }


 
 
 int main(){
     int arr[]={2,1,3};
     int size = sizeof(arr)/sizeof(arr[0]);
     int sum=7;

unordered_map<string,int> hm;
cout<<ans(  arr,size , sum , 0  ,hm);
     return 0;
 }