#include<stdio.h>
void nhap(int A[][200],int&m,int&n);
int tinhTong(int A[][200],int m, int n,int B[],int&k);
int kiemTraNgTo(int x);
int timMin(int B[],int k);
void xuat(int kq);
void main()
{
	int A[200][200],m,n,B[200],k;
	nhap(A,m,n);
	int kq=tinhTong(A,m,n,B,k);
	int kq2=timMin(B,k);
	xuat(kq2);
}
void nhap(int A[][200],int&m,int&n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	}
}
int tinhTong(int A[][200],int m, int n,int B[],int&k)
{
	k=0;
	int Tong=0;
	for(int i=0;i<m;i++)
	{
		int Tong=0;
		for(int j=0;j<n;j++)
		{
			if(kiemTraNgTo(A[i][j])==1)
				Tong=Tong+A[i][j];
		}
		B[k]=Tong;
		k++;
	}		
	return 0;
}
int kiemTraNgTo(int x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}
int timMin(int B[],int k)
{
	int Min=B[0];
	for(int i=1;i<k;i++)
	{
		if(B[i]<Min)
			Min=B[i];
	}
	return Min;
}
void xuat(int kq)
{
	printf("%d",kq);
}


