#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={70,60,50,40,30,20,10};
    int low =0;
    int high =6;
    int find=35;
    int ceil =-1;
    while(low<=high){
        int mid = (low +high )/2;
        if(arr[mid]>find){
            low = mid+1;
                ceil =mid;

            }
            else if(arr[mid]<find){
                high = mid-1;



            
            }
            else{
                    
                ceil = mid;
            }


                }
                cout<<ceil<<endl;
                


   return 0;
}