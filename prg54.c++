// Print 1,4,9..... series
#include<iostream>
using namespace std;
int main()
{
    int i,n,total;
    cout<<"enter the n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
          total=i*i;
        cout<<" \n"<<total;

    }
    return 0;

}