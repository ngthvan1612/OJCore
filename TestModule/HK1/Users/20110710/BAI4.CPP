#include<stdio.h>
void nhap(int &x);
void nhapmang(int a[][100],int m,int n);
void tinhtong(int a[][100],int m,int n,int b[],int &nb);
int tinhtong(int a[][100],int m,int n);
void xuat(int kq);
int LaNT(int a);
void main()

{
	int a[100][100],m,n;
	nhap(m);
	nhap(n);
	nhapmang(a,m,n);
	int kq=tinhtong(a,m,n);
	xuat(kq);
}
void nhap(int &x)
{
	scanf("%d",&x);

}
void nhapmang(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int tinhtong(int a[][100],int m,int n)
{
	int min=10000000;
	for (int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{ 
			if(LaNT(a[i][j])==1)
			{
				s+=a[i][j];
				
			}
		}
		if(min>s)
			min=s;
	}
	if(min!=10000000)
		return min;
	return 0;
}

void xuat(int kq)

{
	printf("%d ",kq);
}
int LaNT(int a)
{
	int dem=0;
	for(int i=1;i<a;i++)
		if(a%i==0)
			dem++;
	if (dem==2)
		return 1;
	return 0;

}