#include<bits/stdc++.h>
// #include<pair>
using namespace std;
class student{
string name;
int age;
public:
void set(string s ,int a){
    name=s;
    age = a;
}
void show(){
    cout<<"name:"<<name<<endl;
    cout<<"age :"<<age<<endl;

}

};
int main(){
pair <string,int>p1;
pair <string ,string>p2;
pair<string , float> p3;
pair<int ,student> p4;
p1=make_pair("sahil",19);
p2=make_pair("india ","new delhi");
p3=make_pair("drill",34.2);
student s1;
p4=make_pair(21,s1);
s1.set("a",23);
cout<<p1.first<<endl;
cout<<p1.second<<endl;
cout<<p2.first<<endl;
cout<<p2.second<<endl;
cout<<p3.first<<endl;
cout<<p3.second<<endl;

    
    



    return 0;
}