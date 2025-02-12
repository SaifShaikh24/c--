// Star Pattern
//    *
//   * *
// * * * *
#include<iostream>
using namespace std;
int main()
{
    int i,j,s=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=s;j++)


            cout<<"  ";

        for(j=1;j<=i;j++)
        {
            cout<<"  *";
        }
        s--;



        cout<<"\n";

    }
    return 0;
}

