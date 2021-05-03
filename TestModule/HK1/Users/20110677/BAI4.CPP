#include <stdio.h>

int kt(int a)
{
	for(int i=2;i<a; i++)
		if(a%i==0)
			return -1;
	return 1;

}

int kiemtra(int a[][100], int m ,int n)
{
	int t;
	int kq=10000000;
	for(int i=0; i<m; i++)
	{

		for(int j=0; j<n; j++)
		{
			 t=0;
			if(kt(a[i][j])==1)
				t=t+a[i][j];
			
		}
		if(t<kq)
		kq=t;
	}
	return kq;
}
void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}
void main()
{
	int a[100][100]; int  m, n;
	nhap(a,m,n);
	int kq=kiemtra(a,m,n);
	printf("%d", kq);
}