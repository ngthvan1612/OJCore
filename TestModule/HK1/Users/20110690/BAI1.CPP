#include<stdio.h>
void nhap(int a[]);
void diem(int a[],int &dA,int &dB,int &dC);
void xuat(int dA,int dB,int dC);
void main()
{
	int a[6],dA=0,dB=0,dC=0;
	nhap(a);
	diem(a,dA,dB,dC);
	xuat(dA,dB,dC);
}
void nhap(int a[])
{
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
}
void diem(int a[],int &dA,int &dB,int &dC)
{
	if(a[0]==a[1])
		{
			dA++;
			dB++;
		}
		else if(a[0]==1&&a[1]==3)
		{
			dA=dA+3;
			dB=dB;
		}
		else if(a[0]==3&&a[1]==1)
		{
			dA=dA;
			dB=dB+3;
		}
		else if(a[0]>a[1])
		{
			dA=dA+3;
			dB=dB;
		}
		else
		{
			dA=dA;
			dB=dB+3;
		}
	if(a[2]==a[3])
		{
			dA++;
			dC++;
		}
		else if(a[2]==1&&a[3]==3)
		{
			dA=dA+3;
			dC=dC;
		}
		else if(a[2]==3&&a[3]==1)
		{
			dA=dA;
			dC=dC+3;
		}
		else if(a[2]>a[3])
		{
			dA=dA+3;
			dC=dC;
		}
		else
		{
			dA=dA;
			dC=dC+3;
		}
	if(a[4]==a[5])
		{
			dB++;
			dC++;
		}
		else if(a[4]==1&&a[5]==3)
		{
			dB=dB+3;
			dC=dC;
		}
		else if(a[4]==3&&a[5]==1)
		{
			dB=dB;
			dC=dC+3;
		}
		else if(a[4]>a[5])
		{
			dB=dB+3;
			dC=dC;
		}
		else
		{
			dB=dB;
			dC=dC+3;
		}
}
void xuat(int dA,int dB,int dC)
{
	printf("%d %d %d",dA,dB,dC);
}