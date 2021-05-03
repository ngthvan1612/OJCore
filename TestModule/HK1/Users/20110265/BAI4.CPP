#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[100][100];
	int sum=0;
	for (int i=0; i<m;i++)
	{
		for(int j=0; j<n;j++)
			scanf("%d",&a[i][j]);

			if(a[i][j]%2!=0&& a[i][j]%3!=0)
				sum += a[i][j];

				
	}

	printf("%d",sum);
}