#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

bool partitionequalsubsetsum(int arr[] ,int length ,int index ,int sum  ){
    if(sum == 0){
        return true;

    }
    if(index==length && sum != 0){
        return false;
    }
    if(sum<0){
        return false;
    }
    

    bool takeit =partitionequalsubsetsum(arr,length,index+1,sum-arr[index]);
    if(takeit ==1){
        return true;
    }

    bool remove =partitionequalsubsetsum(arr,length,index+1,sum); 
    if(remove == 1){
        return true;
    }
    return false;
}
 int main(){
 int arrlength =3;

int arr[]={1,2,3};
int sum =0;
for(int i = 0;i<arrlength;i++){
sum += arr[i];
}
if(sum%2!=0){
    cout<<"no ans";
}
else{
    sum = sum/2;
   
    cout<<partitionequalsubsetsum(arr,arrlength,0,sum );
}

     return 0;
 }