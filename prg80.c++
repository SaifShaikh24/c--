// Pattern
// a
// bC
// dEf
// gHiJ
// kLmNo
#include<iostream>
using namespace std;
int main()
{
    int i,j ,a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                cout<<char(a);
                a++;

            }
            else
            {
                cout<<char(a+32);
                a++;
            }

        }
        cout<<"\n";
    }
    return 0;
}
