
// class inside a class is called nested class 
#include<iostream>

using namespace std;
class student{
    private:
    int roll_no;
    char name[20];
    class address{
        private:
        int house_no;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
        public:
        void setaddress(int house ,char *s, char *c, char *st,char *pin  ){
            house_no=house;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,pin);
// strcpy takes address (first agr kis ma store krna hai, kha sa store krna hai )
   }
};
address add;
public:
void setRollNo(int z){
roll_no=z;
}
void setName(char *n){
 strcpy(name,n);   
}
void setad(int house ,char *s, char *c, char *st,char *pin  )
};
int main(){   







return 0;
}
