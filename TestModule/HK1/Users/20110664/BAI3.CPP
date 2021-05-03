#include <stdio.h>
int check(int a[],int n);
void main()
{
	int a[100],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int kq=check(a,n);
	printf("%d",kq);
}

int check(int a[],int n )
{
	if (a[0]%2==0)
	{	
		int i=1;
		while (i<n)	
		{
			if (((i%2!=0)&&(a[i]%2!=0))||((i%2==0)&&(a[i]%2==0)))
				i+=1;
			else
				return i;
		}
	}
	else
	{
		int i=1;
		while (i<n)	
		{
			if (((i%2!=0)&&(a[i]%2==0))||((i%2==0)&&(a[i]%2!=0)))
				i+=1;
			else
				return i;
		}
	}
return -1;	
}