#include<stdio.h>
void nhap(int a[][100],int &m,int &n);
int soNT(int x);
int tong(int a[][100],int m,int n);
int main()
{
	int a[100][90],m,n;
	nhap(a,m,n);
}
void nhap(int a[][100],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		scanf("%d",a[i][j]);
}
