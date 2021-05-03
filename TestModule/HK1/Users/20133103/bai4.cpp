#include<stdio.h>

int laSNT(int x);
void tongCacSNTTrenTungDong(int A[][100],int m,int n,int B[]);
void nhapMang(int A[][100],int &m,int &n);
int tongNhoNhat(int B[],int m);
void xuatMang(int A[][100],int m,int n);
void xuat(int x);

void main()
{
	int A[100][100],B[100],m,n;
	nhapMang(A,m,n);
    tongCacSNTTrenTungDong(A,m,n,B);
	int kq=tongNhoNhat(B,m);
	xuat(kq);
}
int laSNT(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
		if(x%i==2)
			d++;
		if(d==2)
			return 1;
		return 0;
}
void tongCacSNTTrenTungDong(int A[][100],int m,int n,int B[])
{
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
			if(laSNT(A[i][j])==1)
				tong=tong+A[i][j];
			B[i]=tong;
	}
}
int tongNhoNhat(int B[],int m)
{
	int min=B[0];
	for(int i=1;i<m;i++)
	{
		if(min>B[i])
			return B[i];
	}
}
void nhapMang(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void xuatMang(int A[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
}
void xuat(int x)
{
	printf("%d",x);
}
