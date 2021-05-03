#include<stdio.h>
void nhap(int a[][101],int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int snt(int x)
{
	if(x==0||x==1)
		return 0;
	if(x==2) return 1;
	for(int i=2;i<x;i++)
		if(x%i==0) return 0;
	return 1;
}
int tong(int a[][101],int m,int n)
{
	int kq=99999,sum=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(snt(a[i][j])==1) sum+=a[i][j];
		}
		if(sum<kq) kq=sum;
		sum=0;
	}
	return kq;
}
int main()
{
	int a[101][101],m,n;
	nhap(a,m,n);
	int kq=tong(a,m,n);
	printf("%d",kq);
	return 0;
}
