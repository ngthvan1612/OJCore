#include<stdio.h>

int tongmin(int m, int n, int a[][100]);
int snto(int x);
void nhap(int &m, int &n, int a[100][100]);

int main()
{
	int m,n, a[100][100];
	nhap(m,n,a);
	int t=tongmin(m,n,a);
	printf("%d", t);
	return 0;
}
void nhap(int &m, int &n, int a[100][100])
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
}
int snto(int x)
{
	int d=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			d++;
	}
	if(d==2)
		return 1;
	else 
		return 0;
}
int tongmin(int m, int n, int a[][100])
{
	int min=9999999;
	int tong;
	for(int i=0;i<m;i++)
	{
		tong=0;
		for(int j=0;j<n;j++)
		{
			if(snto(a[i][j])==1)
				tong= tong+a[i][j];
		}
		if(tong<min)
			min=tong;
	}
	return min;
}
