#include<stdio.h>
void nhap (int &n,int &m,int A[][100]);
int kiemTra(int n,int m,int A[][100]);
void xuat(int kt);
void main()
{
	int A[100][100];
	int n,m;
	nhap (n,m,A);
	int kt=kiemTra(n,m,A);
	xuat (kt);
}
void nhap (int &n,int &m,int A[][100])
{
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf ("%d",&A[i][j]);
}
int kiemTra(int n,int m,int A[][100])
{ 
	int c=0;
	int b=0;
	int kt=0;
	for(int j=0;j<m;j++)
	{
     	for(int i=0;i<n;i++)
		{
			for(int x=1;x<A[i][j];x++)
			{
				if (A[i][j]%x!=0 &&A[i][j]!=0&&A[i][j]!=1)
					c++;
			
			}
			if (c==A[i][j]-1)
				b=b+A[i][j];

		}
		if (b>kt)
			kt=b;
	}
	return kt;
}
void xuat(int kt)
{
	printf("%d",kt);
}