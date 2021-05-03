#include<stdio.h>
void xuat(int kq);
int ktNT(int x);
void nhap(int a[][100],int&m,int&n);
int tongNTmin(int a[][100],int m,int n);
void main()
{
	int a[100][100],m,n;
	nhap(a,m,n);
	int kq=tongNTmin(a,m,n);
	xuat(kq);
}
void nhap(int a[][100],int&m,int&n)
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
int tongNTmin(int a[][100],int m,int n)
{
	int sum=0,min=100000;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
			if(ktNT(a[i][j]))
				sum+=a[i][j];
		if(sum<min)
			min=sum;
	}
	return min;
}
int ktNT(int x)
{
	int uoc=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			uoc++;
	if(uoc==2)
		return 1;
	return 0;
}