#include<iostream>
using namespace std;

void tinhDiemSo(int x, int y, int z, int , int u, int v);
int test(int x, int y);

int main()
{
	int x, y, z, t, u, v;
	cin >>x>>y>>z>>t>>u>>v;
	tinhDiemSo(x,y,z,t,u,v);
	return 0;
}
int test(int x, int y)
{
	if(x==y)
		return 2;
	if((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1))
	{
		return 1;
	}
	return 0;
}
void tinhDiemSo(int x, int y, int z, int t , int u, int v)
{
	int a=0;
	int b=0;
	int c=0;
	if(test(x,y)==1)
	{
		a = a+3;
	}
	else if(test(x,y)==2)
	{
		b++;
		a++;
	}
	else
		b=b+3;
	if(test(z,t)==1)
	{
		a = a+3;
	}
	else if(test(z,t)==2)
	{
		a++;
		c++;
	}
	else
		c=c+3;
	if(test(u,v)==1)
	{
		b = b+3;
	}
	else if(test(u,v)==2)
	{
		b++;
		c++;
	}
	else
		c=c+3;
	cout <<a <<" " << b << " " << c <<endl;
}
