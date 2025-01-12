//Find the largest value from 3 Numbers
#include<iostream>
using namespace std;
int main()
{
	 int a,b,c;
	cout<<"enter the a:";
	 cin>>a;
	cout<<"enter the b:";
	cin>>b;
	cout<<"enter the c:";
	cin>>c;

	if(a>b)
	{
		if(a>c)
			{
				cout<<" a is largest "<<a;
			}
		else
			{
				cout<<" c is largest "<<c;
			}
       }
	else
	{
		if(b>c)
			{
				cout<<" b is largest "<<b;
			}
		else
			{
				cout<<" c is largest "<<c;
			}
	}


return 0;
}