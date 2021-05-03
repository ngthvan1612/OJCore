#include<stdio.h>
#define MAX 100
void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int timchanle(int a[], int n)
{
	int t=0;
	for(int i=0; i<n; i++)
	{
		if((a[i]%2!=0 &&a[i+1]%2==0) || (a[i]%2==0 && a[i+1]%2!=0))
			return 1;
		else
			return 0;
	}
	return 0;
}

void main()
{
	int a[100], n;
	nhap(a,n);
	if(timchanle(a,n)==1)
		printf("-1");
	else 
		printf("2");

}