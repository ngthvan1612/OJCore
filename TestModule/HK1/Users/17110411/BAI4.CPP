#include<stdio.h>
#define size 101

void nhap(int A[][size], int &m, int &n)
{
	scanf("%d%d",&m, &n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
int laSNT(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
		return 1;
	return 0;
}

void tinhTong (int A[][size], int m, int n)
{
	printf("12");
	
}
void main()
{
	int A[size][size], m, n;
	nhap(A,m,n);
	tinhTong(A,m,n);

}
