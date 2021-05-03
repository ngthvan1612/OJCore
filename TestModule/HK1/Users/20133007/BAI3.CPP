#include <stdio.h>
void main()
{
	int n,A[200],kt=-1,tam;
	scanf("%d",&n);
	tam=-1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		if (tam!=A[i]%2) tam=A[i]%2;
		else kt=0;
	}
	tam=-1;
	if (kt!=-1) for (int j=0;j<n;j++)
{
		if (tam!=A[j]%2) tam=A[j]%2;
		else 
		{ kt=j;
		break;
		}
	}
	printf("%d",kt);
}

	