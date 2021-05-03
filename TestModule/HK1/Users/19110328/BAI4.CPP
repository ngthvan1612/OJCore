#include<stdio.h>
#define SIZE 100;



void main()
{
	int A[100] [100], m, n;
	nhap(A,m,n);
	int kt=kiemTra(A,m,n);
	xuat(kt);
}
void nhap(int A[] [100], int&m, int&n)
{
	scanf("%d%d", &m,&n);
	for(int i= 0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",A[i][j]);

}
int laNguyenTo( int x)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(A[i][j] < 2) return 0;
			else 
				for(int k=2; k<A[i][j];k++)
				{
					if(A[i][j] %k==0) return 1;
					else return 0;
				}
		}
}
int kiemTra(int A[] [100], int m, int n)
{
	int D[m];
	for(int i=0; i<m;i++)
	{
		D[i] = 0;
		for (int j=0;j<n;j++)
			if(laNguyenTo(A[i][j] == 0)
				D[i] = D[i] + A[i][j];



