#include<stdio.h>
#include<math.h>
int tinh(int a[100][100],int m,int n);
int lasnt(int a[100][100],int m,int n);
void main()
{
	int a[100][100];
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	int kq=tinh(a,m,n);
	printf("%d",kq);
}
int tinh(int a[100][100],int m,int n)
{
	int s[100]={0};
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(lasnt(a,i,j)==2)
				s[i]=s[i]+a[i][j];
		}
	int min=s[0];
	for(i=0;i<m;i++)
	{if(min>s[i])
	min=s[i];}
	return min;
}
int lasnt(int a[100][100],int m,int n)
{
	int flag=0;
	for(int i=1;i<a[m][n];i++)
	{
		if(a[m][n]%i==0)
		{
		flag++;
	}	}
	return flag;
}