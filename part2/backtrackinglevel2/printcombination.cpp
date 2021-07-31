#include<iostream>
using namespace std;
void  combination(int totalitems , int items, string show,int box , int totalbox){
if(box>totalbox){
    if(items>totalitems){
     cout<<show<<endl;   
    }
    return ;

}
combination(totalitems,items+1, show+"i",  box+1,totalbox);
combination(totalitems,items,show+"-",box+1,totalbox);

}
int main(){
    int totalitems =2;
    int items =1;   
    string result = ""; 
    int totalbox = 3;
    int box =1;

    combination(totalitems,items,result,box,totalbox);
    return 0;
}
  