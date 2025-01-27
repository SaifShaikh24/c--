// Nested For Loop
/*
  ***
  ***
  ***
  ***
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)//row
    {
        for(j=1;j<=3;j++)// colme
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}