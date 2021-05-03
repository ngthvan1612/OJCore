#include<stdio.h>
#define N 100
void nhap(int a[N][N],int &m,int &n);
int xuly(int a[N][N],int m,int n);
int snt(int p);
void main()
{
	int a[N][N],m,n;
	nhap(a,m,n);
	int kq=xuly(a,m,n);
	printf("%d",kq);
}
void nhap(int a[N][N],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int snt(int p)
{
	int d=0;
	for(int i=1;i<=p;i++)
		if(p%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}
int xuly(int a[N][N],int m,int n)
{
	int b[N];
	for(int i=0;i<m;i++)
	{ 
		int tong=0;
		for(int j=0;j<n;j++)
			if(snt(a[i][j])==1)
				tong=tong+a[i][j];
		b[i]=tong;
	}
	int min=b[0];
	for(int k=0;k<m;k++)
		if(b[k]<min)
			min=b[k];
	return min;
}