#include<stdio.h>
#include<math.h>
void nhap(int &m,int &n,int A[][100]);
int Tong(int m,int n, int A[][100]);
void xuat(int kq);

void main()
{
	int m,n;
	int A[100][100];
	nhap(m,n,A);
	int kq=Tong(m,n,A);
	xuat(kq);
}
void nhap(int &m,int &n,int A[][100])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}			
void xuat(int kq)
{
	printf("%d",kq);
}
int Tong(int m,int n, int A[][100])
{	
	int max=0;
	int s=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			s=s+A[i][j];
		if(s>max)
			s=max;
	return max;
}