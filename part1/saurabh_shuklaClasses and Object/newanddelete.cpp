#include<string>
#include<iostream>
using namespace std;
// SMA --->static memory allocation
// DMA -->dynamic memory allocatiion
// compile time memory allocaton ma ya allocate hota hai ki kitni memory milagi
// run time utni memory allocat hoti hai
   


// new sa bnna wala variable DMA


int main(){
    int *p = new int ;
    float *q = new float;
    int x;
    cin>>x;
    int *p = new int[x];
    delete p;
    delete q;
    delete []p;
        

return 0;
}