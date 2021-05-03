#include <iostream>
using namespace std;

int sosanh(int a, int b);

int main () 
{
	int x,y,z,t,u,v;
	int a,b,c;
	a=0; b=0; c=0;
	cin >> x >> y >> z >> t >> u >> v;
	if (sosanh(x,y)==1) a+=3;
	else if (sosanh(z,t)==0) 
	{
		a++;
		b++;
	}
	else b+=3;

	if (sosanh(z,t)==1) a+=3;
	else if (sosanh(z,t)==0) 
	{
		a++;
		c++;
	}
	else c+=3;

	if (sosanh(u,v)==1) b+=3;
	else if (sosanh(u,b)==0) 
	{
		b++;
		c++;
	}
	else c+=3;;

	cout << a <<" " << b << " " << c;
}

int sosanh(int a, int b)
{
	if (a==b) return 0;
	else 
	{
		if (a==1 && b==3) return 1;
		else if (a==3 && b==2) return 1;
		else if (a==2 && b==1) return 1;
	}
	
	return -1;
}