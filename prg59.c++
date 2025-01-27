#include<iostream>
using namespace std;
int main()
{
    int n,n1=1,n2=2,i;
     cin>>n1>>n2;
   for(i=3;i<=10;i++)
   {

    n=n1+n2;
    cout<<n;

    n1=n2;
    n2=n;
   }
   return 0;
}