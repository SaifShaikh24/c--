#include<iostream>
using namespace std;
class Arith//class
{
    int a=10,b=20;//default private
    public://access specifier
    void dosum()
    {
        cout<<"\n a + b :"<< a+b;
    }
};                      
int main()
{
    Arith prob1;//class object
    prob1.dosum();
    return 0;
}