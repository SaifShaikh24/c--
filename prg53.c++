// Print Table
#include<iostream>
using namespace std;
int main()
{
    int i,n,multi;
    printf(" enter the table :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        cout<<n<< "*" <<i<<" ="<< n*i<<endl;

    }
    return 0;
}