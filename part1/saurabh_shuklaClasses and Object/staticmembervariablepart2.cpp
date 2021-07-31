
using namespace std;
class Account{
    private:
    int member;
    static float roi;
    public:
    void setbalance(float f){
        roi=f;
        }
       static  void setroi(float j){ /* static member function    */
            roi=j;
        }

};
 float Account:: roi;
int main()
{
    Account a1;
    // Account::roi=43.3; it works if it is public 
    // a1.setroi(3.2); this we do when we create object

    

    return 0;
}