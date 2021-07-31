#include<iostream>
using namespace std;
class Employee{
int id;
int salary;
public:
      void setId(){
          cout<<"enter the id of employee-"<<endl;
          cin>>id;
      }
      void getId(){
          salary=122;
          cout<<"the id of this employee is -"<<endl;
          cout<<id<<endl;
          cout<<"the salary of this employee is -"<<endl;
          cout<<salary<<endl;
      }

};
int main(){
// Employee harry,rohan,lovish,shruti;
// harry.setId();
// harry.getId();
Employee fb[5];
for(int i=0;i<5;i++){
    fb[i].setId();
    fb[i].getId();
}
return 0;
}