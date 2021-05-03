#include <iostream>
using namespace std;

int ketQuaDau( int a, int b)
{
	int kq=0;
	if(a==1)
	{
		if (b==2)
			kq= 0;
		if (b==3)
			kq= 2;
		if(b==1)
			kq= 1;
	}
	if (a==2)
	{
		if(b==1)
			kq= 2;
		if (b==2)
			kq= 1;
		if (b==3)
			kq= 0;
	}
	if (a==3)
	{
		if (b==1)
			kq= 0;
		if (b==2)
			kq= 2;
		if (b==3)
			kq= 1;
	}
	return kq;
}
int main ()
{
	int x, y, z, t, u, v;
	cin >> x>> y>> z>> t>> u>> v;
	int diemA=0, diemB=0, diemC=0;
	if ( ketQuaDau(x,y) ==1)
	{
		diemA++;
		diemB++;
	}
	if ( ketQuaDau(x,y) ==2)
		diemA+=3;
	if ( ketQuaDau(x,y) ==0)
		diemB+=3;
cout << diemA <<" " << diemB << " "<<diemC<< endl;

	if ( ketQuaDau(z,t) ==1)
	{
		diemA++;
		diemC++;
	}
	if ( ketQuaDau(z,t) ==2)
		diemA+=3;
	if ( ketQuaDau(z,t) ==0)
		diemC+=3;
cout << diemA <<" " << diemB << " "<<diemC<< endl;

	if ( ketQuaDau(u,v) ==1)
	{
		diemB++;
		diemC++;
	}
	if ( ketQuaDau(u,v) ==2)
		diemB+=3;
	if ( ketQuaDau(u,v) ==0)
		diemC+=3;


	cout << diemA <<" " << diemB << " "<<diemC;
	return 0;
}