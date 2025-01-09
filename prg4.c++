//prg6 eqvations


#include<iostream>
using namespace std;


int main()
{
	int a1=9,b1=4 ,c1=2 ,d1=12 ,z1;
	int a2=6,b2=9 ,c2=45 ,d2=5 ,z2;
	int a3=123,b3=1 ,c3=2 ,d3=63 ,z3;
	int a4=8,b4=30 ,c4=7 ,d4=6 ,z4;
	int a5=11,b5=11 ,c5=8 ,d5=1 ,z5;
	int a6=6,b6=2 ,c6=6 ,d6=12 ,z6;
	int a7=8,b7=6 ,c7=75 ,d7=3 ,z7;
	int a8=70,b8=55,c8=63 ,d8=40 ,z8;
	int a9=10,b9=1 ,c9=27 ,d9=12 ,z9;
	int a10=21,b10=72 ,c10=31 ,d10=1 ,z10;
	int a11=42,b11=30 ,c11=47 ,d11=20 ,z11;
	int a12=42,b12=57 ,c12=21 ,d12=3 ,z12;
	int a13=77,b13=43 ,c13=9 ,d13=61 ,z13;
	int a14=40,b14=71 ,c14=4 ,d14=6 ,z14;
	int a15=26,b15=1 ,c15=2 ,d15=100 ,z15;
	int a16=83,b16=64 ,c16=2 ,d16=1 ,z16;
	int a17=65,b17=18 ,c17=14 ,d17=7,z17;
	int a18=1,b18=2 ,c18=92 ,d18=53 ,z18;
	int a19=76,b19=26 ,c19=70 ,d19=1 ,z19;
	int a20=98,b20=58 ,c20=88 ,d20=84 ,z20;


	z1=a1*b1/c1+d1;
	z2=a2*b2+c2/d2;
	z3=a3/b3*c3-d3;
	z4=a4+b4*c4/d4;
	z5=a5*b5-c5/d5;

	z6=a6*b6/c6*d6;
	z7=a7*b7+c7*d7;
	z8=a8-b8+c8-d8;
	z9=a9*b9+c9*d9;
	z10=a10+b10+c10+d10;

	z11=a11+(b11+c11-d11);
	z12=a12+(b12+c12)*d12;
	z13=a13+b13*c13-d13;
	z14=a14+(b14*c14)*d14;
	z15=(a15-b15)*c15+d15;

	z16=a16+(b16/c16/d16);
	z17=(a17+b17-c17)*d17;
	z18=(a18*b18)+c18-d18;
	z19=a19+b19+c19*d19;
	z20=(a20+b20+c20)-d20;

	cout<<"\n a1*b1/c1+d1:"<<z1;
	cout<<"\n a2*b2+c2/d2 = "<< z2;
	cout<<"\n a3/b3*c3-d3 = "<< z3;
	cout<<"\n a4+b4*c4/d4 = "<<z4;
	cout<<"\n a5*b5-c5/d5 = "<<z5;

	cout<<"\n a6*b6/c6*d6 = "<<z6;
	cout<<"\n a7*b7+c7*d7 = "<<z7;
	cout<<"\n a8-b8+c8-d8 = "<<z8;
	cout<<"\n a9*b9+c9*d9 = "<<z9;
	cout<<"\n  a10+b10+c10+d10= "<<z10;

	cout<<"\n a11+(b11+c11-d11) = "<<z11;
	cout<<"\n a12+(b12+c12)*d12 = "<<z12;
	cout<<"\n a13+b13*c13-d13= "<<z13;
	cout<<"\n a14+(b14*c14)*d14 = "<<z14;
	cout<<"\n (a15-b15)*c15+d15= "<<z15;

	cout<<"\n a16+(b16/c16/d16) = "<<z16;
	cout<<"\n (a17+b17-c17)*d17 = "<<z17;
	cout<<"\n (a18*b18)+c18-d18 = "<<z18;
	cout<<"\n a19+b19+c19*d19 = "<<z19;
	cout<<"\n (a20+b20+c20)-d20 = "<<z20;


	return 0;
}