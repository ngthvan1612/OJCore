#include<iostream>
using namespace std;

void main()

{
int A=0;
int B=0;
int C=0;
int x,y,z,t,u,v;
cin>>x>>y>>z>>t>>u>>v;
//neu A thang B

	if((x==1 && y==3)|| (x==3&&y==2)||(x==2&&y==1))
	{
	A=A+3;
	C=C+0;
	}
		if((x==3&&y==1)||(x==2&&y==3)||(x==1&&y==2))
	{
	A=A+0;
	C=C+3;
	}
		if(x==y)
	{
	A=A+1;
	C=C+1;
// neu B thang C 

	if((x==1 && y==3)|| (x==3&&y==2)||(x==2&&y==1))
	{
	A=A+3;
	C=C+0;
	}
		if((x==3&&y==1)||(x==2&&y==3)||(x==1&&y==2))
	{
	A=A+0;
	C=C+3;
	}
		if(x==y)
	{
	A=A+1;
	C=C+1;
	}
// neu C thang A
	if((x==1 && y==3)|| (x==3&&y==2)||(x==2&&y==1))
	{
	A=A+3;
	C=C+0;
	}
		if((x==3&&y==1)||(x==2&&y==3)||(x==1&&y==2))
	{
	A=A+0;
	C=C+3;
	}
		if(x==y)
	{
	A=A+1;
	C=C+1;
cout<<A<<' '<<B<<' '<<C;


	}
}
