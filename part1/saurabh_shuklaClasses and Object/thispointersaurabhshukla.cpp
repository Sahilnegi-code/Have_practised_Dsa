 #include<iostream>
 using namespace std;
//  a pointer contains address of an object is called object pointer
class box{
private:
int l,b,h;
public:
void setDimension(int l,int b,int h){
    this->l=l;
    this->b=b;
    this->h=h;

}
void showdimension(){
    cout<<l<<endl<<b<<endl<<h;
}
};
 int main(){
     box smallbox;
     smallbox.setDimension(12,10,54);     
     smallbox.showdimension();
     box *p;

     p=&smallbox;
     cout<<endl;
     p->showdimension();
    //  this is a local object pointer in every instance member function conatining  address of the caller 
    // object
    // this pointer cannot modify





     return 0;
 }
