#include <stdio.h>
#define size 100
void NhapMang (int A[][size], int &m, int &n)
{
	scanf("%d%d", &m,&n);
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
bool CheckNT (int n)
{
	int dem=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
		{
			dem++;
		}
	}
	if (dem==2)
		return true;
	else
		return false;
}
int XuLy (int A[][size], int m, int n)
{
	int sum=9999;
	for (int i=0; i<m; i++)
	{
		int tongtam=0;
		for (int j=0; j<n; j++)
		{
			if (CheckNT(A[i][j]))
			{
				tongtam+=A[i][j];
			}
		}
		if (tongtam < sum)
		{
			sum=tongtam;
		}
	}
	return sum;
}
void main()
{
	int A[size][size],m,n;
	NhapMang(A,m,n);
	printf("%d",XuLy(A,m,n));
}
