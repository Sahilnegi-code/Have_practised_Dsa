#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream my_file;
    my_file.open("negi",ios::in);
    if(!my_file){
        cout<<"no such file";

    }
    else{
        char ch;
        while(1){
            my_file>>ch;
            if(my_file.eof())
            {
                break;
                cout<<ch;
            }
        }
    }

    return 0;
}