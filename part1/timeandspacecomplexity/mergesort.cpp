#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
int n1=mid-low+1;
int n2 = high-mid;
int left[n1];
int right[n2];
for(int i=0;i<n1;i++){
    left[i]=arr[low+i];
}
for(int j =0;j<n2;j++){
    right[n2]=arr[mid+1+j];
}
int il =0;
int jr=0;
int k =0;
while(il<n1 && jr < n2  ){
    if(left[il]<=right[jr]){
        arr[k]=left[il];
        k++;
        il++;
    }
    else{
        arr[k]=right[jr];
        jr++;
        k++;

    }
}
while(il<n1){
arr[k]=left[il];
il++;
k++;

}
while(jr<n2){
arr[k]=left[jr];

jr++;
k++;

}


}
void mergesort(int arr[],int low ,int high){
if(low>=high){
 cout<<low<<" "<<high<<endl;

    return ;

}

        
        //    cout<<low<<" "<<high<<endl;
        //    cout<<low<<" "<<high<<endl;
           int mid =low+high/2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
        
        //    cout<<"nefi";
           
        mergesort(arr,low,mid);
        //    cout<<low<<" "<<high<<endl;

        mergesort(arr,mid+1,high);

        // merge(arr,low,mid,high);                                                         
}

int main(){
    int arr[]={10,20,13,2};
    int arr_size =sizeof(arr)/sizeof(arr[0]);
    // cout<<arr_size;
    mergesort(arr,0,arr_size-1);                                

    for(int i =0;i<arr_size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
