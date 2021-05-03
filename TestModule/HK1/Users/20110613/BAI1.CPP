#include<iostream>

using namespace std;

void kiemtra(int a, int b, int &d1, int &d2);

int main()
{
	int x, y, z, t, u, v;
	cin >> x >> y >> z >> t >> u >> v;
	int dA=0, dB=0, dC=0;
	kiemtra(x,y,dA,dB);
	kiemtra(z,t,dA,dC);
	kiemtra(u,v,dB,dC);
	cout << dA << " " << dB << " " << dC;
	return 0;
}

void kiemtra(int a, int b, int &d1, int &d2)
{
	if(a==b)
	{
		d1=d1+1;
		d2=d2+1;
	}
	else if(a==1 && b==3)
		d1=d1+3;
	else if(a==1 && b==2)
		d2=d2+3;
	else if(a==2 && b==1)
		d1=d1+3;
	else if(a==2 && b==3)
		d2=d2+3;
	else if(a==3 && b==1)
		d2=d2+3;
	else if(a==3 && b==2)
		d1=d1+3;
}
