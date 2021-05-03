#include<stdio.h>
#define sz 100
int Xuli(int A[][sz],int m,int n);
int SoNT(int n);
void nhap(int A[][sz],int &m,int &n);
void main()
{
	int A[sz][sz],m,n;
	nhap(A,m,n);
	int kq=Xuli(A,m,n);
	printf("%d",kq);
}
void nhap(int A[][sz],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int SoNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	return 0;
}
int Xuli(int A[][sz],int m,int n)
{
	int B[sz],nb=0;
	int sum=0;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			if(SoNT(A[i][j])==1)
				sum=sum+A[i][j];
		}
		B[nb]=sum;
		nb=nb+1;
	}
	int min=B[0];
	for(int c=0;c<nb;c++)
	{
		if(B[c]<min)
			min=B[c];
	}
	return min;
}