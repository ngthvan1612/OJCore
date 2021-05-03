#include <stdio.h>
int nguyento(int i);
void main()
{
	int a[1000], m,n, sum = 0, min = -5;
	scanf("%d%d", &m,&n);
	for (int i =1; i <= m; i++)
	{
		sum = 0;
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &a[j]);
			if (nguyento(a[j]) == 1) sum = sum + a[j];
		}
		if (min == -5) min = sum;
		else if (min > sum) min = sum;
	}
	printf("%d", min);
}
int nguyento(int i)
{
	if (i == 2) return 1;
	else 
	{
		for(int j =2; j < i ; j++) 
		{
			if (i % 2 == 0) return 0;
			break;
		}
		return 1;
	}
}