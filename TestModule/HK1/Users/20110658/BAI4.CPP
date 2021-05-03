#include<stdio.h>
void nhap(int A[][100], int &m, int &n);
int tinh(int A[][100], int m, int n);
void xuat(int kq);
void main()
{
	int A[100][100],m,n;
	nhap(A,m,n);
	int kq = tinh(A,m,n);
	xuat(kq);
}

void nhap(int A[][100], int &m, int &n)
{
	scanf("%d %d",&m,&n);
	for(int i = 0; i < m;i++)
	{
		for(int j = 0; j < n;j++)
			scanf("%d", &A[i][j]);
	}
}

int tinh(int A[][100], int m, int n)
{
	int z;
	int t = 0;
	int min = 0;
	for(int i = 0; i < m;i++)
	{
		t = 0;
		for(int j = 0; j < n;j++)
		{
			if(A[i][j] == 2)
			{
				z = 2;
				break;
			}
			else
			{
			for(int k = A[i][j]-1; k > 1; k--)
			{
				if( k == 1)
				{
					break;
				}
				else if(A[i][j] % k == 0)
				{
					z = 0;
					break;
				}
				else
				{
					z = A[i][j];
				}
			}
			t = t + z;
			}
		}
		if(i==0)
			min = t;
		if(t <= min)
			min = t;
	}
	return min;
}

void xuat(int kq)
{
	printf("%d", kq);
}