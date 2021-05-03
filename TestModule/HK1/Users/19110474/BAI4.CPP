#include <stdio.h>
#include <math.h> 
void nhap(int A[][100], int &n, int &m); 
int SNT(int n); 
int ketqua(int A[][100], int n, int m);
void main()
{
	int A[100][100],n,m;
	nhap(A,n,m);
	int kq=ketqua(A,n,m);
	printf("%d",kq);
}
void nhap(int A[][100], int &n, int &m)
{
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++)
		for(int j=0; j<m;j++)
			scanf("%d",&A[i][j]);
}
int SNT(int n)
{
	if (n<2)
	return 0;
	for (int i=2;i<sqrt(n);i++)
		if(n%i==0)
			return 0;
		return 1;
}
int ketqua(int A[][100], int n, int m)
{
	int min;
	for(int i=0;i<n;i++)
	{
		int s=0;
		for(int j=0; j<m; j++)
			 min=A[0][0];
		if(SNT(A[i][j]))
			s=s+A[i][j];
		if (s<min)
			min=s;
	}
		return min;
}