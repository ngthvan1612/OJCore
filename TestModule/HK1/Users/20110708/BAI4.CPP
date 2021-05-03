#include<stdio.h>
int snt(int a);

void main()
{
	int m,n,i,j,a[100][100],b[100];
	scanf("%d%d",&m,&n);
	int t=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		int s=0;
		for(j=0;j<n;j++)
		{
			if(snt(a[i][j])==1)
				s=s+a[i][j];
			
		}
		b[t++]=s;
	}
	int min=b[0];
	for(i=0;i<t;i++)
		if(b[i]<min)
			min=b[i];
	printf("%d",min);
}
int snt(int a)
{
	int dem=0;
	for(int k=1;k<=a;k++)
		if(a%k==0)
			dem++;
	if(dem==2)
		return 1;
	else return 2;
}