#include<iostream>
#include<string>
#include<iostream>
#include<vector>

using namespace std;
bool isprime(int val){
int i =2;
int j = val-1;
while(i<=j){
if(val%i==0){
return false;
}
i++;
}
return true;
}

vector<int> solution(vector <int > v1){
    vector <int> :: iterator it;
    int j=0;
    for(int j =( v1.size()-1);j>=0;j--){

        int val =v1[j];
        if(isprime(val)==true){
it = v1.end()-j;
v1.erase(it);
j++;
}

    }
    return v1;
}
int main(){
    vector <int> v1{11,23,12,321,32,33};
    vector <int> v2 =solution(v1);


for(int i =0;i<v2.size();i++){
 cout<<v2[i]<<endl;   
}
 for (auto x : v1)
    cout << x << endl;
    return 0;
}