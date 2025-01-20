// Pirnt 1,4,12........series
#include<iostream>
using namespace std;
int main()
{
    int i=1,j,total,n;
    cout<<"enter the n :";
    cin>>n;


    for(j=1;j<=n;j*=2)
    {  total=j*i;
      cout<<"\n"<<total;
      i++;
    }
    return 0;
}