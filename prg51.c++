// Print 1.3.5..=25
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=1;i<=10;i+=2)
    {
        total=total+i;
    }
         cout<<total;
    return 0;
}