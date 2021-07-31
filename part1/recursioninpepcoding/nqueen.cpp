#include<iostream>
#include<string>
#include<bits/stdc++.h> 
using namespace std;

bool isitsafeforqueen(int* *arr,int row,int col,int n){
    for(int i =row-1,j = col;i>=0;i--){
        if(arr[i][j]==1){
            return false;
        }
    }
    
    for( int j =col-1,i = row-1;j>=0 && i>=0;j--,i-- ){

        if(arr[i][j]==1){
            return false;
        }
        
    }
    
for( int i =row-1, j =col+1;i>=0 && j<n;i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    
}
return true;
}

void printnqueen(int **arr,string ans,int row ,int n){
    if(row==n){
        cout<<ans<<endl;
        return;
    }
for(int col = 0;col<n;col++){
    if(isitsafeforqueen(arr,row,col,n)){
    arr[row][col]=1;
    
    printnqueen(arr,ans + to_string(row)+"-"+to_string(col)+",",row+1,n);
    arr[row][col]=0;     
    }
     
}




}    





int main(){
    
int n;
cin>>n;
int* *arr= new int *[n];
for(int i=0;i<n;i++){
    arr[i]= new int[n];
    // n size ka size array bnana jo ki array[i] ma store hog gya

}

printnqueen(arr,"",0,n);
    return 0;
}
