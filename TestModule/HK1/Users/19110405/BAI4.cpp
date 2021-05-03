#include <stdio.h>
void nhap(int a[][100],int &m,int &n);
int tinh(int a[][100],int m,int n);
int ktsnt(int a);
void main()
{
	int a[100][100],m,n;
	nhap(a,m,n);
	int kq=tinh(a,m,n);
	printf ("%d",kq);
}
void nhap(int a[][100],int &m,int &n)
{
	scanf ("%d%d",&m,&n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			scanf ("%d",&a[i][j]);
	}
}
int tinh(int a[][100],int m,int n)
{
	int sum=0,min=0;
	for (int k=0;k<n;k++)
	{
		if (ktsnt(a[0][k])==1)
		{
			min=min+a[0][k];
		}
	}

	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (ktsnt(a[i][j])==1)
			{
				sum=sum+a[i][j];

			}
		}
		if (sum<min)
		{
			min=sum;
		}
		sum=0;
	}
	return min;
}
int ktsnt(int a)
{
	int kq=0;
	if (a==2)
		kq=1;
	for (int i=2;i<a;i++)
	{
		if (a%i==0)
		{
			kq=0;
			break;
		}
		else
			kq=1;
	}
	return kq;
}
