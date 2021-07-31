// initializers list is used to initialise data member of class
// the list of member to be initialised is indicated with constructor as a comma separate list followe dby comon

class dummy{
    private:
    int b;
    const int x=5;
    int &y;

    public:
    dummy(int &n):x(5),y(n){
        
    }
   
  
};
// 1-initilizer is used in non static const data member 
// 2-for initialization of reference members
void fun(){
    const int k=5;
    // when we write const we cant change value of k and we have to initialse the value at that time


}
int main(){
    int m =6;

    dummy d1(m);

    return 0;
}