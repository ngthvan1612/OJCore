#include<stdio.h>
#define SIZE 100
void nhap(int &m,int &n,int a[][]);
int tinhtong(int a[][],int m,int n);
void xuat(int x);
void main()
{
   int a[SIZE][SIZE];
   int m,n;
   nhap(m,n,a);
   int kq=tinhtong(m,n,a);
   xuat(kq);
}
void nhap(int &m,int &n,int a[][])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
void xuat(int x)
{
	printf("%d",x);
}
int tinhtong(int a[][],int m,int n)
{
	int b[SIZE];
	int k=0;
	int max=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		b[k]=b[k]+a[i][j];
		k=k+1;
	}
	for(int i=0;i<m;i++)
		{
			if(max>b[i])
			max=b[i];
		}
	return max;
}
