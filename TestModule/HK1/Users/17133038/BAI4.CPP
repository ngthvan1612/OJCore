#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int x)
{
	int dem = 0;
	if(x==0 || x==1) return 0;
	if(x==2) return 1;
	for(int i = 2; i <= sqrt(x); i++)
	{
		if(x%i==0) dem++;
	}
	if(dem==0) return 1;
	return 0;
}

void main()
{
	int a[100][100],m,n;
	scanf("%d%d",&m,&n);
	for(int i = 0; i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int tc = 0;;
	int tm = -1;
	for(int u = 0; u<m;u++)
	{
		for(int v = 0;v<n;v++)
		{
			if(check(a[u][v])==1)
				{
					tc = tc + a[u][v];
				}

		}
		if(tm==-1) tm = tc;
		if(tc<tm) tm = tc;
		tc = 0;
	}
	printf("%d",tm);

}