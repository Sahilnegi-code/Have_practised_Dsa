#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Priorityqueue
{
    void Swap(int x ,int y ){
        swap(data[x],data[y]);
    }
    void upheapify(int size)
    {
        if (size == 0)
        {
            return;
        }

        int p = (size - 1) / 2;
        if (data[p] > data[size])
        {
            Swap(p,size);
            upheapify(p);
        }

        return;
    }

    void downheapify(int p){
        int  min =p;
        int lc = 2*p+1;
        if(lc<=(data.size()-1)  &&  data[lc]<data[p]){
            min =lc;
            

        }
        int rc = 2*p+2;
        if(rc<(data.size()-1) &&  data[rc]<data[min] ){
            min =rc;
        }

        if(p != min){
            Swap(p,min);
            downheapify(min);
        }
         }
public:
    vector<int> data;
    int size()
    {
        return data.size();
    }


    void pop(){


        if( data.size()==0 ){

            cout<<"underflow";
            return;

        }

        swap(data[0],data[data.size()-1]);
        data.erase(data.begin() + (data.size()-1));
        
        downheapify(0);
    


    }
    int top()
    {
        if (data.size() == 0)
        {
            cout << "underflow";
            return -1;
        }
        return data[0];
    }
void add(int val)
    {
        data.push_back(val);
        upheapify(data.size() - 1);

    }
};
int main()
{

Priorityqueue pq;

pq.add(24);
pq.add(11);
pq.add(3);
pq.add(7);
cout<<pq.top();

    return 0;
}