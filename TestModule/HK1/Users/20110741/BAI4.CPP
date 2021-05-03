#include <stdio.h>
void nhap(int &m, int &n, int A[][150]);
int laNT(int n);
int Min(int n, int A[]);
int Tinh(int m, int n, int A[][150]);
int main()
{
	int m,n,A[150][150];
	nhap(m,n,A);
	int kq=Tinh(m,n,A);
	printf("%d",kq);
	return 0;
}
int Tinh(int m, int n, int A[][150])
{
	int S[150];
	int nS=0;
	for (int i=0;i<m;i++)
	{
		S[nS]=0;
		for (int j=0;j<n;j++)
		{
			if(laNT(A[i][j])==1) S[nS]+=A[i][j];
		}
		nS++;
	}
	int kq=Min(nS,S);
	return kq;
}
int Min(int n, int A[])
{
	int kq=A[0];
	//printf("%d",kq);
	for (int i=0;i<n;i++)
	{
		if(A[i]<kq) kq=A[i];
	}
	//printf("%d ",kq);
	return kq;
}
int laNT(int n)
{
	int d=0;
	for (int i=1;i<=n;i++)
		if(n%i==0) d++;
	if (d==2) return 1;
	return 0;
}
void nhap(int &m, int &n, int A[][150])
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
}