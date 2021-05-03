#include<stdio.h>
#define pow 100
void nhap(int a[][pow], int &m, int &n);
int bailam(int a[][pow], int m, int n);
int SNT(int x);
void main()
{
	int a[pow][pow],m,n;
	nhap(a,m,n);
	bailam(a,m,n);
}
void nhap(int a[][pow], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int bailam(int a[][pow], int m, int n)
{
	int s=0;
	int b[pow];
	int k=0;
	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
			if(SNT(a[i][j])==1)
			{
				s=s+a[i][j];
			}
		b[k++]=s;
	}
	int min=b[0];
	for(int c=0;c<k;i++)
		if(b[k]<min)
			min=b[k];
	printf("%d",min);
	return 1;
}
int SNT(int x)
{
	int dem=0;
	for(int i=2;i<x;i++)
		if(x%i==0)
			dem++;
	if(dem==1) return 1;
	else return 0;
}
