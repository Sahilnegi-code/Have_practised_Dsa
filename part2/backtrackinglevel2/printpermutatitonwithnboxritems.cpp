#include<iostream>
// que is putting r items in n(no of boxes) . print all the solution which is required to place  
using namespace std;
void permutation(int arr[] ,int item , int totalitem, int arraylength){

if(totalitem <item){
for(int i =0;i<arraylength;i++){
    cout<<arr[i]<<" - ";
}
cout<<endl;
return ;
}
    for(int i = 0;i<arraylength;i++){
        if(arr[i]==0){
        arr[i]=item;
        permutation(arr,item+1,totalitem,arraylength);
        arr[i]=0;

        }




    }

}
int main(){
int arr[]={0,0,0};
permutation(arr,1,2,3);

    return 0;
}