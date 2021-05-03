#include<stdio.h>
void nhap(int A[][100],int &m,int &n);
void main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
	printf("0");
}
void nhap(int A[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}