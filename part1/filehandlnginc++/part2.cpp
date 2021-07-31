#include<iostream>
using namespace std;
#include<fstream>
int main(){
fstream my_file;
my_file.open("negi",ios::out);
if(!my_file){
    cout<<"file not created";

}
else{
    cout<<"file created successfully";
    my_file<<"hello how are u?";
    my_file.close();

}
    return 0;
}

