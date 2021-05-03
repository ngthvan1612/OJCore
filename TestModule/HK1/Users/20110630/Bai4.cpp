#include <stdio.h>


void nhap(int &m,int &n,int A[100][100])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}
int LaNT(int x)
{
	int count=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			count++;
	if(count==2)
		return 1;
	return 0;
}
void TongA(int m,int n,int A[100][100],int &nB,int B[])
{
	nB=0;
	int sum=0;
	for(int i=0;i<m;i++)
	{	for(int j=0;j<n;j++)
			if(LaNT(A[i][j])==1)
				sum += A[i][j];
		B[nB]=sum;
		sum=0;
		nB++;
	
	}
}
int Min(int nB,int B[])
{
	int min=B[0];
	for(int i=0;i<nB;i++)
		if(min>B[i])
			min=B[i];
	
	return min;
}
void xuat(int x)
{
	printf("%d",x);
}

void main()
{
	int m,n,A[100][100],nB,B[100];
	nhap(m,n,A);
	TongA(m,n,A,nB,B);
	int Kq=Min(nB,B);
	xuat(Kq);
}