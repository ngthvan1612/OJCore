#include<stdio.h>

void nhap(int a[][100],int m,int n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}

void xuat(int kq)
{
	printf("%d",kq);
}

int nt(int a)
{
	int d=0;
	for(int i=1;i<=a;i++)
		if (a%i==0)
			d++;
	if (d==2)
		return 1;
	return 0;
}

int kt(int a[][100],int m,int n)
{
	int min=0;
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{
			if(nt(a[i][j])==1)
				s=s+a[i][j];
		}
		if(s<min)
			min=s;
	}
	return min;
}

int main()
{
	int a[100][100];
	int m,n;
	nhap(a,m,n);
	int kq=kt(a,m,n);
	xuat(kq);
	return 0;
}
