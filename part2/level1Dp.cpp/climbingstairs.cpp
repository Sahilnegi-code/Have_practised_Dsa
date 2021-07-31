#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int dp[4+1];
int printpathsandcountpaths(int n , vector<string> &paths, string  psf){
    if(n==0){
        paths.push_back(psf);
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
int firststep =printpathsandcountpaths(n-1,paths, psf+ "1-");
int secondstep = printpathsandcountpaths(n-2,paths, psf+ "2-");
int thirdstep = printpathsandcountpaths(n-3,paths, psf+ "3-");
return dp[n]=(firststep + secondstep + thirdstep); 

}
 int main(){
     int n = 4;
     memset(dp,0,sizeof(dp));
     vector<string> paths ;
     string psf ="" ; 
   cout<<  printpathsandcountpaths(n,paths,psf)<<endl;
     for(auto x: paths){
         cout<<x<<endl;
     }
     for(auto x: dp){
         cout<<x<<endl;
     }

     return 0;
 }