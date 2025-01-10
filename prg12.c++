//marksheet

#include<iostream>
using namespace std;


int main()

{

	int m,p,c;
	float total,per;

	cout<<"enter the maths marks:";
	cin>>m;

	cout<<"enter the physics marks:";
	cin>>p;

    cout<<"enter the chemistry marks:";
	cin>>c;

	total=m+p+c;
	cout<<"\n total ="<<total;

	per=(total/300)*100;
	cout<<"\n per is :"<<per;


    return 0;
}