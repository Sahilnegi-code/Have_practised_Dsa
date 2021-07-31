#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter arry-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++)
{
for(int j =i;j<n;j++){

    int k =i;
    while(k<=j){
        cout<<arr[k];
        k++;
    }
    cout<<endl;
}

}   
 return 0;
}
