#include<iostream>
#include<stack>
class stackwithmin{
stack<int> alldata;
stack<int> mindata;

    public:
    int min(){
        if(mindata.size()==0){
            return -1;
        }
        return mindata.top();
    }
    int size(){
        return alldata.size();
    }
    int top(){
        if(alldata.size()==0){
            return -1;
        }
        return alldata.top();

    }
    void  push(int no){
        alldata.push(no);
        if( mindata.size()==0  ||  no<mindata.top()){
            mindata.push(no);
            }

    }
    int pop(){
        if(alldata.size()==0{
            cout<<"nothing to be poped";
            return -1 ;
        }
        int top = alldata.top();
        if(alldata.top()==mindata.top()){
            alldata.pop();
            mindata.pop();
        }
        else{
            alldata.pop();
        }
        return top;

    }


};
using namespace std ;
int main(){

    return 0;
}