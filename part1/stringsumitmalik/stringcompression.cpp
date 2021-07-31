#include<iostream>
#include<string>
using namespace std;
string compression(string str){

string   val = "";
 val= val  + str[0]  ;
int j =1;
int i=0;
int count =1;
while(j<str.length()){
if(str[i] !=  str[j]) {
val = val+ to_string(count) + str[j];
count =0;
}
if((j+1)==str.length()){
    val  = val + to_string(1);
}

count ++;

i++;
j++;
}

return val;

}
int main(){
    
cout<<compression("aaabccssddde")<<endl;
// string s = "vaibhav";
// s = s + to_string(1);
// cout<<s;
return 0;
}