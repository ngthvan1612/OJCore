#include<iostream>
using namespace std;
void ktra(int x,int y,int &a,int &b)
{
	if(x==y)
	{a=a+1; b=b+1;}
	else if (x==1)
			{if (y==3) a=a+3;
			else if (y==2) b=b+3;}
		else if(x==2)
			{if (y==3) b=b+3;
			else if (y==1) a=a+3;}
			else if (x==3)
			{if (y==1) b=b+3;
			if(y==2) a=a+3;}
}
int main()
{
	int a,b,c; a=0; b=0; c=0;
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	ktra(x,y,a,b);
	ktra(z,t,a,c);
	ktra(u,v,b,c);
	cout<<a<<" "<<b<<" "<<c;
}