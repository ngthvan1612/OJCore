#include<iostream>
using namespace std;

int kbb(int i)
{
	switch (i)
	{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
	}
}

int main ()
{
	int x, y, z, t, u, v;
	cin >> x >> y >> z >> t >> u >> v;
	int a=0, b=0, c=0;
	if (kbb(x)==kbb(y)) { a=a+1; b=b+1;}
	else 
		{
		if (kbb(x)==1 && kbb(y)==2) b=b+3;
		if (kbb(x)==1 && kbb(y)==3) a=a+3;
		if (kbb(x)==2 && kbb(y)==1) a=a+3;
		if (kbb(x)==3 && kbb(y)==2) a=a+3;
		if (kbb(x)==2 && kbb(y)==3) b=b+3;
		if (kbb(x)==3 && kbb(y)==1) b=b+3;
		}
	if (kbb(z)==kbb(t)) { a=a+1; c=c+1;}
	else
		{
		if (kbb(z)==1 && kbb(t)==2) c=c+3;
		if (kbb(z)==1 && kbb(t)==3) a=a+3;
		if (kbb(z)==2 && kbb(t)==1) a=a+3;
		if (kbb(z)==3 && kbb(t)==2) a=a+3;
		if (kbb(z)==2 && kbb(t)==3) c=c+3;
		if (kbb(z)==3 && kbb(t)==1) c=c+3;
		}
	if (kbb(u)==kbb(v)) { b=b+1; c=c+1;}
	else
		{
		if (kbb(u)==1 && kbb(v)==2) c=c+3;
		if (kbb(u)==1 && kbb(v)==3) b=b+3;
		if (kbb(u)==2 && kbb(v)==1) b=b+3;
		if (kbb(u)==3 && kbb(v)==2) b=b+3;
		if (kbb(u)==2 && kbb(v)==3) c=c+3;
		if (kbb(u)==3 && kbb(v)==1) c=c+3;
		}
	cout << a << " " << b << " " << c;
}