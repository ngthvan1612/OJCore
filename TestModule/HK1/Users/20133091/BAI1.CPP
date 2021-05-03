#include<stdio.h>


void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int dA=0;
	int dB=0;
	if(x==1 && y==1)
	{
		dA++;
		dB++;
	}
	if(x==1 && y==2)
		dB+=3;
	if(x==1 && y==3)
		dB+=3;
	if(x==2 && y==1)
		dA+=3;
	if(x==2 &&y==2)
	{
		dA++;
		dB++;
	}
	if(x==2 && y==3)
		dB+=3;
	if(x==3 && y==1)
		dA+=3;
	if(x==3 && y==2)
		dA+=3;
	if(x==3 && y==3)
	{
		dA++;
		dB++;
	}
	int mA=0;
	int mC=0;
	if(z==1 && t==1)
	{
		mA++;
		mC++;
	}
	if(z==1 && t==2)
		mC+=3;
	if(z==1 && t==3)
		mC+=3;
	if(z==2 && t==1)
		mA+=3;
	if(z==2 && t==2)
	{
		mA++;
		mC++;
	}
	if(z==2 && t==3)
		mC+=3;
	if(z==3 && t==1)
		mA+=3;
	if(z==3 && t==2)
		mA+=3;
	if(z==3 && t==3)
	{
		mA++;
		mC++;
	}
	int nB=0;
	int nC=0;
	if(u==1 && v==1)
	{
		nB++;
		nC++;
	}
	if(u==1 && v==2)
		nC+=3;
	if(u==1 && v==3)
		nC+=3;
	if(u==2 && v==1)
		nB+=3;
	if(u==2 && v==2)
	{
		nB++;
		nC++;
	}
	if(u==2 && v==3)
		nC+=3;
	if(u==3 && v==1)
		nB+=3;
	if(u==3 && v==2)
		nB+=3;
	if(u==3 && v==3)
	{
		nB++;
		nC++;
	}
		
	int tongA=dA+mA;
	int tongB=dB+nB;
	int tongC=mC+nC;
	printf("%d %d %d",tongA,tongB,tongC);
}
