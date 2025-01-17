// Print A to Z with their ascii value
#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        cout<<" \n"<<char(i)<<"-"<<int(i);
    }
    return 0;
}