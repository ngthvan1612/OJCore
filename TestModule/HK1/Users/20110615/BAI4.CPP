#include<stdio.h>
#define size 100
void nhap(int a[size][size],int &m,int &n);
int tim(int a[size][size],int m,int n);
int laNT(int x);
void xuat(int kq);
int main()
{
	int a[size][size];
	int m,n;
	nhap(a,m,n);
	int kq=tim(a,m,n);
	xuat(kq);
	return 0;
}
void nhap(int a[size][size],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int tim(int a[size][size],int m,int n)
{
	int b[size],tong;
	b[0]=0;
	int nb=0;
	for(int i=0;i<m;i++)
	{
		tong=0;
		for(int j=0;j<n;j++)
		{
			if(laNT(a[i][j])==1)
				tong+=a[i][j];
		}
		b[nb]=tong;
		nb++;
	}
	int min=b[0];
	for(i=0;i<nb;i++)
	{
		if(b[i]<min)
			min=b[i];
	}
	return min;
}
int laNT(int x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	else 
		return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}