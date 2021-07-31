#include<bits/stdc++.h>
using namespace std;
int sumoffibinocco(int no){
    if(no==1 || no==2){
        return no-1;
    }

    int sum =  sumoffibinocco(no-1)+sumoffibinocco(no-2);
return sum ;
}

int main(){
    int n;
    cin>>n;
    cout<<sumoffibinocco(n);
 
    return 0;

}