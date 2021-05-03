#include<iostream>
using namespace std;
int main()
{
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	int a,b,c;
	a = 0; b = 0; c = 0;
	int keo = 1;
	int bua = 2;
	int bao = 3;
	if(x == keo && y == bao)
	{
		a += 3;
		b += 0;
	}
	if(x == keo && y == bua)
	{
		a += 0;
		b += 3;
	}
	if(x == bua&& y == bua)
	{
		a +=1;
		b +=1;
	}
	if(x ==bua && y == keo)
	{
		a +=3;
		b +=0;
	}
	if(x == bao && y == keo)
	{
		a +=0;
		b +=3;
	}
	if(x == bua&& y == bao)
	{
		a +=0;
		b +=3;
	}if(x == bao && y == bua)
	{
		a +=3;
		b +=0;
	}





	if(z == keo && t == bao)
	{
		a += 3;
		c += 0;
	}
	if(z == keo && t == bua)
	{
		a += 0;
		c += 3;
	}
	if(z == bua&& t == bua)
	{
		a +=1;
		c +=1;
	}
	if(z ==bua && t == keo)
	{
		a +=3;
		c +=0;
	}
	if(z == bao && t == keo)
	{
		a +=0;
		c +=3;
	}
	if(z == bua&& t == bao)
	{
		a +=0;
		c +=3;
	}if(z == bao && t == bua)
	{
		a +=3;
		c +=0;
	}




	if(u == keo && v == bao)
	{
		b += 3;
		c += 0;
	}
	if(u == keo && v == bua)
	{
		b += 0;
		c += 3;
	}
	if(u == bua&& v == bua)
	{
		b +=1;
		c +=1;
	}
	if(u ==bua && v == keo)
	{
		b +=3;
		c +=0;
	}
	if(u == bao && v == keo)
	{
		b +=0;
		c +=3;
	}
	if(u == bua&& v == bao)
	{
		b +=0;
		c +=3;
	}if(u == bao && v == bua)
	{
		b +=3;
		c +=0;
	}



	cout<<a<<" "<<b<< " "<<c;
	return 0;
}