#include<iostream>
#include<string>
using namespace std; 
int lcs(string one ,string two, int size,int sum){
    if(one.size()==0){
        return sum;
    }
    char gettingchar = one[size-1];
    for(int i =0;i<two.size();i++){
        char ch = two[two.size()-1];
if(gettingchar==ch){
sum = sum +1;
}
}
cout<<one<<endl;
return lcs(one.substr(0,size-1),two,size,sum);

}
int main(){
    string one ="sahil";
    string two ="palik";
    int sizeofstring =5;
    string no = one.substr(0,0);
 cout<<no;
    cout<<lcs(one,two,sizeofstring,0);
    return 0;
}