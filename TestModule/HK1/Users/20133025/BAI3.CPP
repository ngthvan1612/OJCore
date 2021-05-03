#include<stdio.h>
int main()
{
	int n,i,t;
	int A[100];
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for( i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]%2==0 && A[j]%2==1)
			{
				t=-1;
			}
			else if((A[i]%2==0 && A[j]%2==0)||(A[i]%2==1 && A[j]%2==1)) 
			{
				printf("%d",j);
			}
			break;
		}
	}
	return 0;
}
