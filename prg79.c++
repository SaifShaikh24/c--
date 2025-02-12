// Pattern
// 65
// bc
// 686970
// ghij
// 757677879
// pqrstu
#include<iostream>
using namespace std;
int main()
{
    int i,j ,a=65;
    for(i=0;i<=5;i++)
    {
        if(i%2==0)
        {
        for(j=0;j<=i;j++)
        {
           cout<<a;
           a++;
        }

        }

        else
        {
              for(j=0;j<=i;j++)
            {
             cout<<char(a+32);
             a++;
            }
        }

        printf("\n");
    }
    return 0;
}