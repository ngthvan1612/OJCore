#include<stdio.h>
#include<math.h>
int main()
{
	int A[1000],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n-1;j++)
		{
			int dem=0;
			if (A[i]%2==0 && A[j]%2!=0)
			{
				dem=-1;
			}
			else if (A[i]%2!=0 && A[j]%2==0)
			{
				dem=-1;
			}
			else if ((A[i]%2==0 && A[j]%2!=0)||(A[i]%2!=0 && A[j]%2==0))
			{
				dem=i;
			}
		}
	}
	printf("%d",dem);
}