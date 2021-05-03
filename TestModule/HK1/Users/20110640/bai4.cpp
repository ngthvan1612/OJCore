#include<stdio.h>
#define size 100
void nhapmang(int &m,int &n,int A[size][size]);
int laNT(int n);
int songuyento(int m,int n,int A[size][size]);
void xuat(int kq);

void main()
{
	int m,n,A[size][size];
	nhapmang(m,n,A);
	int kq=songuyento(m,n,A);
	xuat(kq);

}
void nhapmang(int &m,int &n,int A[size][size])
{
	scanf("%d%d",m,n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);

}
int laNT(int n)
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (n%i==0)
			dem++;
	}
	if (dem==2)
		return 1;
	else 
		return 0;
		
}
int songuyento(int m,int n,int A[size][size])
{
	int tong=0;
	int max=0;
	for (int i=0;i<m;i++)
	{
	   for (int j=0;j<n;j++)
	   {
		   if (laNT(A[i][j])==1)
			   tong=tong+A[i][j];
		   if (tong>max)
			   max=tong;
	   }
	   tong=0;
	}
	return max;
}
void xuat(int kq)
{
	printf("%d",kq);
}