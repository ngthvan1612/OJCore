#include<stdio.h>
int kt( int x)
{
	if ( x%2==0)
		return 2;
	return 1;
}

int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for( i=0;i <n;i++)
	{
		scanf("%d",&a[i]);
	}
	int a1=0;
	int b=0;
	int c=0;
	int dem=0;
	int vt;
	for ( i=0;i<n;i++)
	{
		if ( kt(a[i])==1 && kt(a[i+1])==2)
		{
			a1=1;
			i++;
		}
		else if( kt(a[i])==2 && kt(a[i+1])==1)
		{
			b=1;
			i++;
		}
		else if (( kt(a[i])==1 && kt(a[i+1])==1)||( kt(a[i])==2 && kt(a[i+1])==2))
		{	
			c=1;
			vt=i;
			i++;
			break;
		}
	}
	if ( a1==1 && b==0)
		printf("-1");
	else 
		if ( b==1 && a1==0)
			printf("-1");
	
	if (c==1)
		printf("%d",a[vt]);
	return 0;
}