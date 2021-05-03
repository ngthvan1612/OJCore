
#include<stdio.h>
void input(int a[], int n);
int even(int a);
int check(int a[], int n);

void main()
{
	int a[100],n;
	scanf("%d",&n);
	input(a,n);
	int i=check(a,n);
	printf("%d",i);
}

void input(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
}
int check(int a[], int n)
{
	int flag=-1;
	if(even(a[0])==1)
	{
		for(int i=2;i<n;i+=2)
			{
				if(even(a[i])!=1)
				{
					flag=i;
					return flag;
				}
			}
		for( i=1;i<n;i+=2)
			{
				if(even(a[i])!=0)
				{
					flag=i;
					return flag;;
				}
			}
	}
	if(even(a[0])==0)
	{
		for(int i=2;i<n;i+=2)
			{
				if(even(a[i])!=0)
				{
					flag=i;
					return flag;
				}
			}
		for( i=1;i<n;i+=2)
			{
				if(even(a[i])!=1)
				{
					flag=i;
					return flag;
				}
			}
	}
    return flag;
}
int even(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}
