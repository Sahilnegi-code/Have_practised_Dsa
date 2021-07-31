#include<iostream>
using namespace std;
int main(){
    int arr[]={10,30,40,80};
    int prr[]={1,2,3,4};
    int i=0;
    int j=0;
    int k =0; 
    int newarray[8];
    while(i<4 && j<4){
        if(arr[i]<prr[j]){
            newarray[k]=arr[i];
            i++;
            k++;
        }
        else{
            newarray[k]=prr[j];
            j++;
            k++;
        }

    }
 while(i<4){
     newarray[k]=arr[i];
     i++;
     k++;

 }

 while(j<4){
newarray[k]=prr[j];
j++;
k++;
 }
 for(int i=0;i<8;i++){
     cout<<newarray[i]<<endl;
 }

    return 0;
}