// check the largest number
#include<iostream>
using namespace std;

int main()
{
	int a,b;

	cout<<"enter a:";
	cin>>a;

	cout<<"enter b:";
	cin>>b;

	if(a>b)
	{
		cout<<"a "<<a<<" greater than b"<<b;
	}
	else
	{
		cout<<"b "<<b<< "greater than a"<<a;
	}

	return 0;
}