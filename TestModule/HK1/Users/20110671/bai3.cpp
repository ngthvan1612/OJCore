#include<stdio.h>
void xuat(int x);
void nhap(int &n, int A[]);
int kiemtra(int n,int A[]);
void main()
{
	int n;
	int A[100];
	nhap(n,A);
	int kq=kiemtra(n,A);
	xuat(kq);
}

void nhap(int &n, int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}

int kiemtra(int n,int A[])
{
	int vitri=0;
	int le=0;
	int chan=0;
	if(A[0]%2==0)
	{
		for(int b=0;b<n;b=b+2)
		{
		    if(A[b]%2==0)
			{
			     chan=chan+1;
			}
			else
			{
				vitri=b;
				return vitri;
				break;
			}
		}
		for(int c=1;c<n;c=c+2)
		{
			if(A[c]%2==1)
			{
			    le=le+1;
			}
			else
			{
				vitri=c;
				return vitri;
				break;
			}
		}
	}
	if(A[0]%2==1)
	{
		for(int d=0;d<n;d=d+2)
		{
		    if(A[d]%2==1)
			{
			     le=le+1;
			}
			else
			{
				vitri=d;
				return vitri;
				break;
			}
		}
		for(int e=1;e<n;e=e+2)
		{
			if(A[e]%2==0)
			{
			    chan=chan+1;
			}
			else
			{
				vitri=e;
				return vitri;
				break;
			}
		}
	}
	return -1;
}

void xuat(int x)
{
	printf("%d",x);
}