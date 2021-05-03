#include<stdio.h>;
void nhap(int A[][100],int &m,int &n);
void tinh(int A[][100],int m,int n,int B[]);
int Nt(int a);

void main()
{
	int A[100][100], B[100];
	int m,n;
	nhap(A,m,n);
	tinh(A,m,n,B);
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
void tinh(int A[][100],int m,int n,int B[])
{
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for (int j=0;j<n;j++)
			if(Nt(A[i][j])==1)
				tong+=A[i][j];
		B[i]=tong;
	}
	int min=B[0];
	for (i=1;i<m;i++)
		if (min >B[i])
			min=B[i];
	printf("%d",min);
}
int Nt(int a)
{
	if (a==1)
		return 0;
	for (int i=2;i<a;i++)
		if (a%i==0)
			return 0;
	return 1;
}