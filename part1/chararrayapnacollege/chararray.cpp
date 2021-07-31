#include<iostream>
using namespace std;
int main(){
    // char arr[100]="sahil";
    // int i=0;
    // while(arr[i]!='\0')
    // {
    //     cout<<arr[i]<<endl;
    //     i++;
    // }
    // cin>>arr;
    // cout<<arr;
    // cout<<arr[2];
    // check palindrome.
int n;
cout<<"length";
cin>>n;
char arr[n+1];
cin>>arr;
bool check=true;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1]){
        check = false;
    }
    if(i >=(n-1)){
        break;
        }

}
if(check=true){
    cout<<"palindrome";

}
else{
    cout<<"not";
}



    return 0;


    }