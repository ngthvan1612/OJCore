#include <stdio.h>
int kt (int x)
{
	for (int i=2; i<x;i++)
		if (x%i==0) return 0;
	return 1;
}
int main ()
{
	int arr[110][110];
	int hang,cot;
	int sum,summin=99999;
	scanf("%d%d",&hang,&cot);
	for (int m=0;m<hang;m++)
	{
		sum=0;
		for (int n=0;n<cot;n++)
		{
			scanf("%d",&arr[m][n]);
			if (kt(arr[m][n])) sum+=arr[m][n];
		}
		printf("\n");
		if (sum<summin) summin=sum;
	}
	printf("%d",summin);
	return 0;
}