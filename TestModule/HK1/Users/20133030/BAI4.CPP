#include<stdio.h>
void inp(int &m,int &n, int a[][100])
{
	scanf("%d%d",&m,&n);
	for (int i=0; i<m;i++)
		for (int j=0; j<n;j++)
				scanf("%d",&a[i][j]);
}
int checknt(int x)
{
	int tmp=0;
	for(int i=1;i<=x;i++)
	{
		if (x%i == 0) tmp=tmp+1;	
	}
	printf("(%d)",tmp);
	return tmp;
}
int check(int m, int n, int a[][100])
{
	int tmp=0;int max=10000,x;
	for (int i=0; i<m;i++){
		for (int j=0; j<n;j++)
		{	
			x=checknt(a[i][j]);
			if (x==2) tmp=tmp+1;
		}
		if (max>tmp) max=tmp;
		tmp=0;
	}
	return tmp;
}
void outp(int c)
{
	printf("%d",c);
}
void main()
{
	int m,n,a[100][100];
	inp(m,n,a);
	int c=check(m,n,a);
	outp(c);
}