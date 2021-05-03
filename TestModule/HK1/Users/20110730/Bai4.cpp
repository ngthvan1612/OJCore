#include<stdio.h>
void tinhTongdong(int A[][100],int m,int n,int B[]);
void tongNhonhat(int B[],int m);
int ngto(int a);
void nhapMang(int A[][100],int &m,int &n);
void main()
{
	int A[100][100],B[100],m,n;
	nhapMang(A,m,n);
	tinhTongdong(A,m,n,B);
	tongNhonhat(B,m);
}
void tinhTongdong(int A[][100],int m,int n,int B[])
{
	for (int i=0;i<m;i++)
	{
		int tong=0;
		for (int j=0;j<n;j++)
		{
			if (ngto(A[i][j]))
				tong+=A[i][j];
		}
		B[i]=tong;
	}
}
void tongNhonhat(int B[],int m)
{
	int min=B[0];
	for (int i=0;i<m;i++)
		if (B[i]<min)
			min=B[i];
	printf("%d",min);
}
int ngto(int a)
{
	int dem=0;
	for (int i=1;i<=a;i++)
		if (a%i==0)
			dem++;
	if (dem==2)
		return 1;
	return 0;
}
void nhapMang(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}