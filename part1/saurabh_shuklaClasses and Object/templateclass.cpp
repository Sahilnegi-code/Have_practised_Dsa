#include<string>
#include<iostream>
using namespace std;


template <class T1,class T2>
class myclass{
T1 data;
T2 name;
public:
void print(){
    cout<<data<<endl;
    cout<<name<<endl;
}
myclass(T1 data ,T2 name){
    this->data = data;
    this->name = name;


}
};


template <class T>
class vector{

    public:
    T *arr ;
    T size;
vector( T m){
    size =m;
    arr = new T[size];

}
void print(){
for(T i =0;i<size;i++){
    cout<<arr[i]<<endl;
}

}
};

int main(){
// vector<char> p(3);
// p.arr[0]='a';
// p.arr[1]='b';
// p.arr[2]='c';
// p.print();
myclass <int ,string> p(1,"sahil") ;
p.print();



    return 0;
}