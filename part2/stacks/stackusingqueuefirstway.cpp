#include<queue>
#include<bits/stdc++.h>
using namespace std;
class stacklike{
    private:
    int N;
    queue<int> q1;
    queue <int>q2;
    public:
    stacklike(){
        N=0;
    }
    void push(int x){
        q2.push(x);
        N++;
        
        while(q1.size()!=0){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        q1=q2;
        q2=temp;
        



    }


    void pop(){
        if(q1.empty()){
            cout<<"error";
            return;
        }
        else{
            q1.pop();
            N--;
        }

    }
    int top(){
        if(q1.empty()){
           return -1;
        }
       return q1.front();  
        }

        int size(){
            if(q1.size()==0){
                return 0;
            }
            else{
                return q1.size();
            }
        }

};
int main(){
stacklike w;
w.push(1);
w.push(2);
w.push(3);
w.push(4);
w.push(5);
cout<<w.top()<<endl;
w.pop();
cout<<w.top();
w.pop();
cout<<w.size();

    return 0;
}