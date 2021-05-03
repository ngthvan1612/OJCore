#include<stdio.h>
#include<math.h>
#define size 100
int tinh(int m,int n,int A[][size]);
void nhap(int &m,int &n,int A[][size]);
int nguyento(int x)
;
void xuat(int kq);
void main()
{
	int A[size][size],m,n;
	nhap(m,n,A);
	int kq=tinh(m,n,A);
	xuat(kq);

}
void nhap(int &m,int &n,int A[][size])
{
	scanf("%d%d",m,n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int nguyento(int x)
{
	for(int i=2;i<x;i++)
		if(x%i==0)
			return 0;
		return 1;
	return 1;
}
int tinh(int m,int n,int A[][size])
{
	int tong=0,min=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(nguyento(A[i][j])==1)
				tong+=A[i][j];
			if(tong<min)
				min=tong;
	return min;
}