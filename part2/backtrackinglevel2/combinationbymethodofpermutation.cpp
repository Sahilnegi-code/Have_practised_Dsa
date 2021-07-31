#include<iostream>
using namespace std;
void combination(int arr[] ,int item , int totalitem , int  j ,int arraylength ){
    if(item>totalitem){
for(int i =0 ;i<arraylength;i++){
    cout<<arr[i];
}
cout<<endl;
return ;

    }

    for(int i =j+1;i<arraylength;i++){
        if(arr[i]==0){
            arr[i]=item;
            combination(arr,item+1,totalitem,i, arraylength);
            arr[i]=0;
        }
    }
}
int main(){
int arr[]={0,0,0};
int item = 1;
int totalitem =2;
int arraylength = 3;
combination(arr,item,totalitem,-1,arraylength);

    return 0;
}
  