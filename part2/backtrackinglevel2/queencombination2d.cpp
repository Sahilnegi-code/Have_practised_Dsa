// que is to print the no of combination in which queens can be placedd in 2D array

#include<iostream>



using namespace std;

void combinationofqueen(int countofqueen ,int totalqueen, string asf, int row ,int col){
    if(row == totalqueen){
        if(countofqueen == totalqueen){
            cout<<asf;
        }
        cout<<endl;
       
return ;
    }
int nr;
int nc;
string yaf;
string naf;
if(col ==  (totalqueen-1)){
nr = row+1;
nc =0;
yaf = asf + "q\n";
naf = asf + "-\n";

}else{
nr =row;
nc = col+1;
yaf = asf + "q" +" ";
naf = asf + "-" + " "; 
}
combinationofqueen(countofqueen +1 , totalqueen , yaf , nr ,nc );
combinationofqueen(countofqueen , totalqueen , naf , nr ,nc );




}
 signed main(){
     combinationofqueen(0,2,"",0,0);
     return 0;
 }