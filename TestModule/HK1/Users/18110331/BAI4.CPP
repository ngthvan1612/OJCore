#include <stdio.h>
int tinhtongMin(int A[][100], int m, int n);
void nhapMang(int A[][100], int &m, int &n);
int laSNT(int x);
void xuat(int kq);

void main()
{
	int A[100][100], m, n;
	nhapMang(A, m, n);
	int kq = tinhtongMin(A, m, n);
	xuat(kq);
}

void nhapMang(int A[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i =0; i <m; i ++)
		for(int j = 0; j <n; j++)
			scanf("%d", &A[i][j]);

}

int laSNT(int x)
{
	int d=0;

	for(int i = 1; i<=x; i++)
		if(x%i==0)
			d++;

	if(d==2)
		return 1;
	return 0;
}

int tinhtongMin(int A[][100], int m, int n)
{
	int max = 0;

	for(int j =0; j<n; j++)
	{
		int t =0;
		for(int i =0; i ,m; i++)
		{
			if(laSNT(A[i][j]) == 1)
				t=t+A[i][j];
		}
		if(t >max)
			max=t;
	}

	return max;
}

void xuat(int kq)
{
	printf("%d", kq);
}
