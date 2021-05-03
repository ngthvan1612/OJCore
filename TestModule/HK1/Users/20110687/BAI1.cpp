// BAI1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
using namespace std;

void NhapCapDau(int &x, int &y, int &z, int &t, int &u, int &v)
{
	cin >> x >> y >> z >> t >> u >>v;
}

void TinhDiem(int a, int b, int &diemA, int &diemB)
{
	if(a==b)
	{
		diemA = 1;
		diemB = 1;
	}
	else if ((a==1 && b==3) || (a==3 && b==1))
	{
		if(a==1 && b==3)
		{
			diemA = 3;
			diemB = 0;
		}
		else
		{
			diemA = 0;
			diemB = 3;
		}
	}
	else if ((a==3 && b==2) || (a==2 && b==3))
	{
		if(a==3 && b==2)
		{
			diemA = 3;
			diemB = 0;
		}
		else
		{
			diemA = 0;
			diemB = 3;
		}
	}
	else if ((a==2 && b==1) || (a==1 && b==2))
	{
		if(a==2 && b==1)
		{
			diemA = 3;
			diemB = 0;
		}
		else
		{
			diemA = 0;
			diemB = 3;
		}
	}
	
	
}

void Xuly(int a, int b, int &diemA, int &diemB)
{
	TinhDiem(a, b, diemA, diemB);
}

void InDiem(int a, int b, int c)
{
	cout << a << " " << b << " " << c;
}

int main(int argc, char* argv[])
{
	int x, y, z, t, u, v, diemx, diemy, diemz, diemt, diemu, diemv;
	NhapCapDau(x, y, z, t, u, v);
	Xuly(x, y, diemx, diemy);
	Xuly(z, t, diemz, diemt);
	Xuly(u, v, diemu, diemv);
	diemx += diemz;
	diemy += diemu;
	diemv += diemt;
	InDiem(diemx, diemy, diemv);
	return 0;
}
