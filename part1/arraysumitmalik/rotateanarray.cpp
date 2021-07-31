#include<iostream>
using namespace std;

void reverse( int[] ,int,int,int ,int);
void rotate(int [] ,int,int);
int main(){
int rot;
    int len;
     cin>>len;
    cout<<"kha sa rotate krna hai"<<endl;
   cin>>rot;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    rotate(arr,rot,len);
    cout<<endl;
    for(int j=0;j<len;j++){
        
     cout<<arr[j]<<endl;
 }

    return 0;
}
void  reverse(int arr[],int li , int ri ){


int temp;
for(int i =li; i<ri; i++){
    temp=arr[i];
    arr[i]=arr[ri];
    arr[ri]=temp;
    ri--;
}
}
void rotate(int arr[],int k ,int l){
    k=k%l;
    if(k<0){
        k=l+k;
    }
// part 1
reverse(arr,0,l-1-k);
// part2
reverse(arr,l-1-k+1,l-1);
//all
reverse(arr,0,l-1);
}