#include <stdio.h>
void nhap(int A[][100], int &m, int &n);
int soNT(int n);
void check(int A[][100], int m,int n, int B[100]);
int kt(int B[100],int m);
void xuat(int kq);
int main()
{
	int m,n,A[100][100],B[100];
	nhap(A,m,n);
	check(A,m,n,B);
	int kq=kt(B,m);
	xuat(kq);
	return 0;
}
void nhap(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m,&n);
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	}
}
int soNT(int n)
{
	if(n<=1) return 0;
	for (int i=2;i<n;i++)
		if (n%i==0) return 0;
	return 1;
}
void check(int A[][100], int m,int n, int B[100])
{
	int sum;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<m;i++)
			if(soNT(A[i][j])==1) 
				sum=sum+(A[i][j]);
			B[i]=sum;
	}

}
int kt(int B[100],int m)
{
	int min=0;
	for (int i=0;i<m;i++)
		if (min<B[i])		
			min=B[i];
	return min;
}
void xuat(int kq)
{
	printf("%d ",kq);
}