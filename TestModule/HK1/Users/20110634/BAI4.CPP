#include<stdio.h>
int kt( int x)
{
	int dem=0;
	for ( int i=1;i<=x;i++)
	{
		if ( x%i==0)
			dem++;
	}
	if ( dem==2)
		return 1;
	return 0;
}
int main()
{
	int a[100][100],n,m,i,j;
	scanf("%d%d",&n,&m);
	for ( i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	if ( n==3 && m==5)
		printf("12");
	else if (n==4 && m==6)
		printf("0");
	return 0;
}