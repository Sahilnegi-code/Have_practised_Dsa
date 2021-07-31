#include<iostream>
using namespace std;
//     class Complex{
// private:
// int a,b;
// public:
// Complex(int a, int b){
//     this->a=a;
//     this->b=b;
// }

// Complex(int k){
// a=k;
// }
// Complex(){}

// Complex(Complex &c)
// {
// a=c.a;
// b=c.b;
// }
// };
// 1-class ma agar koi bhi constructor nhi bna hai default and copy constructor
// 2-ydi koi constructor hai to default constructor  nhi bnayga and but copy bnayga 
// 3- copy construcutor bnaya hai to default  nhi bnaga
class Matrix{
    private:

int rows,cols;
int  **mat = new int* [rows];

public:
    Matrix(int rows,int cols){
this ->rows=rows;
this ->cols=cols;
for(int i =0;i<cols;i++){
mat[i]=new int[cols];

}

 
 }
 
Matrix(Matrix &m){
rows=m.rows;
cols=m.cols;
 }

 Matrix(){}
 void putData(){
     for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
             cout<<mat[i][j]<<" " ;
         }
         cout<<endl;
     }
     
 }
 void getData(){
     for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
             cin>>mat[i][j];
         }
     }
     
 }
};


int main(){
    Matrix m1(2,3); 
m1.getData();
m1.putData();
// Complex c1(2,5),c2,c3(5);
// Complex c4=c1;
return 0;
}
