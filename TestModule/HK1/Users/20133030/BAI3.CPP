#include<stdio.h>
void inp(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int check(int a[],int n)
{
	int tmp=0;
	for (int i=1;i<n;i++)
	{
		if (((a[i] % 2 == 0)&&(a[i-1] % 2 !=0 )) || ((a[i] % 2 != 0)&&(a[i-1] % 2 ==0 ))) tmp=-1;
		else tmp=i;
	}
	return tmp;
}
void outp(int c)
{
	printf("%d",c);
}
void main()
{
	int n,a[100];
	inp(a,n);
	int c=check(a,n);
	outp(c);
}