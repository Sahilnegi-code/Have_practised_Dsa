#include<iostream>
using namespace std;
class Shop{
string name;
public:
void get(string name){
    this->name = name;
}
void print(){
    cout<<name<<endl;
}
};
int main(){
    Shop *k ;
   
    string name;
Shop *s1= new Shop[5];
k =s1;
for(int i =0;i<5;i++){
cin>>name;
s1->get(name);
s1++;
}
// this is a pointer which points to the object  which invokes the member function  
cout<<endl;
for(int i =0;i<5;i++){

k->print();

k++;
}

return 0;
}
