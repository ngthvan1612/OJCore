#include<stdio.h>
int ktra(int A[][100],int m,int n);
int tongNT1Hang(int A[][100],int m,int n,int a);
int laNT(int a);
void nhap(int A[][100],int &m,int &n);
void xuat(int kq);
int main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq=ktra(A,m,n);
	xuat(kq);
	return 0;
}
int ktra(int A[][100],int m,int n)
{
	int min=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(min>tongNT1Hang(A,m,n,i))
				min=tongNT1Hang(A,m,n,i);
	return min;
}
int tongNT1Hang(int A[][100],int m,int n,int a)
{
	int sum=0;
	for(int j=0;j<n;j++)
		if(laNT(A[a][j])==1)
			sum+=A[a][j];
	return sum;
}
int laNT(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
		if(a%i==0)
			count++;
	if(count==2)
		return 1;
	return 0;
}
void nhap(int A[][100],int &m,int &n)
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