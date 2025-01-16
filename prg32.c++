// If else to check the largest number
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c=30;
    if(a>b && a>c)
    {
        cout<<"  a is largest\n"<<a;
    }
    else if(b>c)
    {
        cout<<"  b is largest \n "<<b;
    }
    else
    {
        cout<<" c is largest\n "<<c;
    }
    return 0;
}