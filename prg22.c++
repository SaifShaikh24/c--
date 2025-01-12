// number divisible by 5 or 3
#include<iostream>
using namespace std;
int main()
{
	int a;

	cout<<"enter the a:";
	cin>>a;

	if(a%15==0)
	{
    cout<<" a"<< a<<" is divisible ";
	}
	else
	{
	cout<<" \n a"<< a<<" is not divisible ";
	}

	return 0;
}