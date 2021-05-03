#include<iostream>

using namespace std;
void diem(int &a, int &b, int x,int y)
{
	if(x==1&&y==3)
	{
		a+=3;
	}
	else if(x==3&&y==1)
	{
		b+=3;
	}
	else if(x==2&&y==3)
		b+=3;
	else if(x==3&&y==2)
		a+=3;
	else if(x==1&&y==2)
		b+=3;
	else if(x==2&&y==1)
		a+=3;
	else if(x==y)
	{
		a+=1;
		b+=1;
	}
}
void main()
{
	int A=0,B=0,C=0;
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	diem(A,B,x,y);
	diem(A,C,z,t);
	diem(B,C,u,v);
	cout<<A<<" "<<B<<" "<<C;
}
