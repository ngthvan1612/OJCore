#include<stdio.h>
#define N 100
void mhap(int a[][N], int m, int n,);
int nt(int n);
void kt(int a[][N],int m, int n);
void main()
{
	int n,m,a[N][N];
	scanf("%d %d",&m,&n);
	nhap(a,m,n);
	kt(a,m,n);
}
void mhap(int a[][N], int m, int n,)
{
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		}
int nt(int n)
{
	for (int i=2;i<n;i++)
		if(n%i==0) return 0;
		return 1;
		}
void kt(int a[][N],int m, int n)
{
	int b[m]={0};
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			if(nt(a[i][j])==1) b[i]=b[i]+a[i][j];
    int min=b[0];
	for (int i=1;i<m;i++)
		if (min>b[i]) min=b[i];
		printf("%d",min);
}


	

