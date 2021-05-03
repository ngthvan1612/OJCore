#include<stdio.h>

int main()
{
	int i,kt=-1;n,a[100];
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n-1; i++)
	{
		if((a[i]%2)*(a[i+1]%2)!=0) kt=a[i];
		else if((a[i]%2)==0 && (a[i+1]%2)==0) kt==a[i];
	}
	printf("%d",kt);
	return 0;
}