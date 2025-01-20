// Print 1,4,3.... series
#include<iostream>
using namespace std;

int main()
{
    int i,n,multi;
    cout<<" enter the n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {  multi=i*i;
            cout<<"\t"<<multi;
        }
        else
        {
            cout<< "\t"<<i;
        }
    }
    return 0;
}
