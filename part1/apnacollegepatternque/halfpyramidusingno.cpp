#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<" tell row-";
    cin>>row;
    cout<<"tell coulmn";
    cin>>col;
    int count=1;
    for(int i=1;i<=row;i++){
        
for(int j=1;j<=i;j++){
    cout<<count;

}
count=count+1;
cout<<endl;
    }


    return 0;
}