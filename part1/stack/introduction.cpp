#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n=100;
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
            }
            void push(int n){
                if(top==n-1){
                    cout<<"stack overflow"<<endl;
                    return;}
                    top++;
                    arr[top]=n;
                    }
                    void pop(){
                        if(top==-1){
                            cout<<"no element to pop";
                            return;
                        }
                        top--;
                    }
                    int Top(){
if(top==-1){
                            cout<<"no element to pop";
                            return -1;
                        }
                        return arr[top];
                    }
 bool empty(){
     if(top==-1){
                            cout<<"no element to pop";
                            return true;
                        }
                        return false;
     
 }                   

                                


};           
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
cout<<st.Top();
st.pop();
cout<<st.Top();
st.push(5);
cout<<st.Top();

    return 0;
}