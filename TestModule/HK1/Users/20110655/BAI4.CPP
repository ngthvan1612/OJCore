#include <stdio.h>
void nhap(int A[][100],int &m,int &n);
void kiemtra(int A[][100],int m,int n,int &min);
void xuat(int min);
int main()
{
	int A[100][100],m,n,min;
	nhap(A,m,n);
	kiemtra(A,m,n,min);
	xuat(min);
	return 0;
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
				scanf("%d",&A[i][j]);
}
int IsPrime(int a)
{
	int d=0;
	for(int i=1;i<=a;i++)
		if(a%i==0)
			d=d+1;
	if(d==2)
		return 1; 
	else
		return 0; 
}
void kiemtra(int A[][100],int m,int n,int &min)
{
	int s=0;
	for(int j=0;j<n;j++)
		if(IsPrime(A[0][j])==1)
			s=s+A[0][j];
	min=s;
	for(int i=1;i<m;i++)
	{
		s=0;
		for(int j=0;j<n;j++)
			if(IsPrime(A[i][j])==1)
				s=s+A[i][j];
		if(s<min)
			min=s;
	}
}
void xuat(int min)
{
	printf("%d",min);
}