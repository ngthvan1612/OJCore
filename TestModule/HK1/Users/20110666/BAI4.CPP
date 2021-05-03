#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
int ktraSNT(int n);
int tongmin(int A[][100],int m,int n);
void xuat(int min);
void main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
	int kq=tongmin(A,m,n);
	xuat(kq);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int ktraSNT(int n)
{
	if(n<2)
		return 0;
	else
	{
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}
int tongmin(int A[][100],int m,int n)
{
	int min=1000000;
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{
			if(ktraSNT(A[i][j])==1)
				s=s+A[i][j];
		}
		if(s<min)
			min=s;
	}
	if(min==1000000)
		return 0;
	return min;

}
void xuat(int min)
{
	printf("%d",min);
}