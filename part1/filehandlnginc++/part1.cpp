#include<iostream>

#include<fstream>/* fstrem.ofstream,ifstream ka declaration hai */
using namespace std;
int main(){
// ofstream output;
// output.open("sahil.txt");
// output<<"hello";


ifstream is;
char ch;
 is>>ch;
is.open("sahil.txt");

while(!is.eof()){
ch=is.get();

is>>ch;
}

    // ofstream--> sending data with output stream objects
    // bringing data with input stream objects

    return 0;
}