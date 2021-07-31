#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"len-";
    cin>>len;
    int a[len];
    cout<<"which no-"<<endl;
    int no;
    cin>>no;
    for(int i =0;i<len;i++){
        cin>>a[i];
    }
    
    int h = len-1;
    int i=0;
    int middle;
   while(i<=h){
 middle=(len-1)/2;
if(a[middle]>no){
    h=middle-1;
}
else if(a[middle]<no){
 i = middle+1;
}
else{
    cout<<"answer is "<<middle;
    return 0;
}
    }
    cout<<-1;

}