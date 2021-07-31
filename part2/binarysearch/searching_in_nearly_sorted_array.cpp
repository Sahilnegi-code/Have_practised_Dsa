#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,31,20,50,40,70,60};
    int low=0;
    int high =6;
    int find =10;
    int index=-1;

    while(low<=high ){
        int mid = (low+high )/2;
        if(arr[mid]== find ){
            index=mid;

            
            break;
        }
        else if( mid-1>=0 && arr[mid-1] ==find ){
            index=mid-1;
            break;

        }
        else if(mid+1>=high && arr[mid+1]==find){\
        index=mid+1;
        break;

        }
        else {
if(arr[mid]>find){
    high = mid-2;
}
else{
    low=mid+2;
}
        }
    }
    cout<<index;


        return 0;
}