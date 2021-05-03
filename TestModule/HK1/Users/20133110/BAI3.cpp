#include<stdio.h>
#define s 100
void nhap(int &m,int &n);
void nhapmang(int a[s][s],int m,int n);
int tinhtoan(int a[s][s],int m,int n);
void xuat(int kq);
int main()
{
	int a[s][s];
	int m,n;
	nhap(m,n);
	nhapmang(a,m,n);
	int kq=tinhtoan(a,m,n);
	xuat(kq);
}
void nhap(int &m,int &n)
{
	scanf("%d%d",&m,&n);
}
void nhapmang(int a[s][s],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int tinhtoan(int a[s][s],int m,int n)
{
	return 0;
}






