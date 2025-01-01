#include<iostream>
using namespace std;
class Arith
{
    int a=10,b=20;//default private
    public://access specifier
    void setData()//Setter
    {
        cout<<"Enter a:";
        cin>>a;
        cout<<"Enter b:";
        cin>>b;
    }
    int get_a()//getter
    {
        return a;
    }
    int get_b()//getter
    {
        return b;
    }
    int dosum()
    {
        //return get_a()+get_b();
        //return get_a()-get_b();
        // return get_a()*get_b();
        return get_a()/get_b();
    }
};
int main()
{
    Arith prob1;//class object
    prob1.setData();
    cout<<"\n A:"<<prob1.get_a()<<"\t B:"<<prob1.get_b();
    cout<<"\n Sum:"<<prob1.dosum();
    return 0;
}