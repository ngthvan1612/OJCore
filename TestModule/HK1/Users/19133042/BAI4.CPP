#include <stdio.h>
#include <math.h>
#define MAX 100
void nhapMang(int A[][MAX],int &m,int &n);
void xuat(int x);
int tinhTong(int A[][MAX],int m,int n);
int laNT(int x);
void main()
{
	int A[MAX][MAX],m,n;
	nhapMang(A,m,n);
	int kq =tinhTong(A,m,n);
	xuat(kq);
}
int tinhTong(int A[][MAX],int m,int n)
{
	int B[100]= {0};
	int min = 1000000;
	for(int i = 0; i < m ; i++)
		for(int j = 0 ; j < n ; j++)
			if(laNT(A[i])==1)
				B[i]+=A[i];
	for(int u=0 ; u < m ; u ++)
		if(B[u] < min)
			min = B[i];
	return min;
}
int laNT(int x)
{
	if(x<2)
		return 0;
	for(int i = 2 ; i < sqrt(x) ; i++)
		if(x %i == 0)
			return 0;
	return 1;
}
void xuat(int x)
{
	printf("%d",x);
}
void nhapMang(int A[][MAX],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i = 0; i < m ; i++)
		for(int j = 0 ; j < n ; j++)
			scanf("%d",&A[i][j]);
}