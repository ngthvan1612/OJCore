#include<stdio.h>
void nhap(int &n, int A[]);
int chan_le(int n, int A[]);
void xuat(int kq);
void main()
{
	int n,A[100];
	nhap(n,A);
	int kq=chan_le(n,A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int chan_le(int n, int A[])
{
	int k=0;int i=0;
	while(i<n)
	{
		if((A[i]%2==0 && A[i+1]%2==0)||(A[i]%2!=0 && A[i+1]%2!=0))
		{ 
			k=i+1; break;
		}
		else
		{
			k=-1;
			i=i+1;
		}
	}
	return k;
}
void xuat(int kq)
{
	printf("%d",kq);
}
	
		