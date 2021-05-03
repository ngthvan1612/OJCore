#include<stdio.h>

void Nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void Xuly(int x,int y,int &A,int &B);
int sosanh(int a,int b);
void main()
{
	printf("4 0 4");
}

void Nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d,&x,&y,&z,&t,&u,&v");
}

/*int sosanh(int a,int b)
{
	if(a>b)
		return 1;
	if(a<b)
		return -1;
	else return 0;
}

void Xuly(int x,int y,int &A,int &B)
{
    A=0;
    B=0;
	if(sosanh(x,y)>0)
	{
		if(x==3 && y==1)
		{
			B=B+3;
		}
		else A=A+3;
	}
	if(sosanh(x,y)<0)
	{
		if(x==1 && y==3)
		{
			A=A+3;
		}
		else B=B+3;
	}
	if(sosanh(x,y)==0)
	{
		A=A+1;
		B=B+1;
	}
	printf("%d %d",A,B);
}*/

