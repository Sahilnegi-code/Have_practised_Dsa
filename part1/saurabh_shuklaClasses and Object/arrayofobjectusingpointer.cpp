#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void setData(int id ,int price){
        this->id = id;
        this->price=price;
    }
    void getData(){
        cout<<"price of this item is "<<endl<<price;
        cout<<"id of this item is"<<endl<<id;
    }

};
int main(){
int p,q;    
Shop *ptr = new Shop[2]; /* 2 size ka object provide honga. */
Shop *ptrTemp=ptr;

for(int i=0;i<3;i++){
    cout<<"Id and price of item"<<i+1;
    cin>>p>>q;
    ptr->setData(p,q);
    ptr=ptr+1;
}
for(int j=0;j<3;j++){
    cout<<"item no "<<j+1<<endl;
    ptr->getdata();


}

return 0;
}