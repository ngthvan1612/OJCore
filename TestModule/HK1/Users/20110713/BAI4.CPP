#include <stdio.h>
void nhap(int &m,int &n,long a[][200]);
void xuat(long kq);
int LaNT(long x);
long Tim_Min(int nB,long b[]);
long xuli(int m,int n,long a[][200]);

int main()
{
	int m,n;
	long a[200][200];
	nhap(m,n,a);
	long kq=xuli(m,n,a);
	xuat(kq);
	return 0;
}
void nhap(int &m,int &n,long a[][200])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%ld",&a[i][j]);
}
void xuat(long kq)
{
	printf("%ld",kq);
}
int LaNT(long x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
long Tim_Min(int nB,long b[])
{
	long min=b[0];
	for(int i=0;i<nB;i++)
		if(b[i]<min)
			min=b[i];
	return min;
}
long xuli(int m,int n,long a[][200])
{
	long sum;
	long b[1000];
	int nB=0;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
			if(LaNT(a[i][j]))
				sum+=a[i][j];
			else
				sum+=0;
		b[nB++]=sum;
	}
	return Tim_Min(nB,b);
}