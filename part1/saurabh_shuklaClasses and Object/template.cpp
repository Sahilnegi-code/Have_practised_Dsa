#include<iostream>
using namespace std;
// #### template  function is called generic function ########
template <class A,class B>
 A add(A a ,B b){
    return a+b;
}
 // #### template   function is called generic function ########

//  ################template class ###########
class ArrayList{
    private:
    int cap;
    struct ControlBlock{
        int capacity;
        int *arr_ptr;
    };
    ControlBlock *s;
    public:
    ArrayList(int capacity){
        cap = capacity;
s=new ControlBlock;
s->capacity=capacity;
s->arr_ptr=new int[s->capacity];
    }
    void addElement(int index ,int data){
        if(index>=0 && index<=cap-1){
            s->arr_ptr[index]=data;
        }
        else{
            cout<<"array index is not valid.";
        }
    }
    void viewElement(int index,int &data){
        if(index>=0 && index<=cap-1){
            data=s->arr_ptr[index];
        }
        else{
            cout<<"Array index is not valid";
        }
    }
    void viewList(){
        for(int i=0;i<s->capacity;i++){
            cout<<s->arr_ptr[i];
        }
    }
};
//  ########template class ###########
int main(){
// cout<<add(5.3,4);
int data ;
ArrayList list1(4);
list1.addElement(0,32);
list1.viewElement(0,data);
cout<<data;
    return 0;
}

