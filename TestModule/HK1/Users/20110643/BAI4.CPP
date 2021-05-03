#include<stdio.h>
#include<math.h>
void nhap(int a[][100], int &m, int &n);
int ktSoNguyenT(int x);
int kiemTra(int a[][100], int m, int n);
void xuat( int kq);

void main()
{
	int a[100][100],m,n;
	nhap(a,m,n);
	int kq=kiemTra(a,m,n);
	xuat(kq);
}
void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int ktSoNguyenT(int x)
{
	if(x<2)
		return 0;
	if(x==2)
		return 1;
	if(x>2)
	{
		for(int i=2;i<=sqrt(x);i++)
			if(x%i==0)
				return 0;
	}
	return 1;
}
int kiemTra(int a[][100], int m, int n)
{
	int t,min=9999;
	for(int i=0;i<m;i++)
	{
		t=0;
		for(int j=0;j<n;j++)
		{
	    	if (ktSoNguyenT(a[i][j])==1)
				t = t + a[i][j];
		}
		if(t<min)
			min=t;
	}
	return min;
}
void xuat( int kq)
{
	printf("%d",kq);
}
