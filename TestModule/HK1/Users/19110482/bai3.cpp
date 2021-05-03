#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,A[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0&&A[i+1]%2!=0||A[i]%2!=0&&A[i+1]%2==0)
		{
			printf("-1");
			break;
		}
	}
	for(int i=1;i<n-1;i++)
	{
	    if (A[i]%2==0&&A[i+1]%2==0||A[i]%2!=0&&A[i+1]%2!=0)
		{	
         	printf("%d",i);
	    }
	}
}
