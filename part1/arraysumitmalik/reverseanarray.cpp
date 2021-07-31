#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"tell len";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int temp;
   int i = 0;
   int j =n-1;
   while(i<j){
       temp = arr[i];
       arr[i]= arr[j];
       arr[j]=temp;
       i++;
       j--;

   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}