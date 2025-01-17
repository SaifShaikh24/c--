// Print 2.4.6...=30
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=0;i<=10;i+=2)
    {
        total=total+i;
    }
    cout<<"total= "<<total;
    return 0;
}