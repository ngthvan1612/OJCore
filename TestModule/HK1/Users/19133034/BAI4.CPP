#include <stdio.h>
#include <math.h>
int nguyento(int x);
void main()
{
	int A[100][100],B[100],nB;
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	
	
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	for(i=0;i<m;i++)
	{
		int nB=0;
		int count=0;
		for(j=0;j<n;j++)
		{
			if(nguyento(A[i][j])==1)
			{
				count =count+A[i][j];
				if(j=n)
					break;
			}
			B[nB]=count;
				nB++;	

		}
		
	}
	
	for(i=0;i<nB;i++)
		printf("%d",B[i]);
	int min=B[0];
	for(i=0;i<nB;i++)
	{
		if(min>B[i])
			min=B[i];
	}
	printf("%d",min);

}
int nguyento(int x)
{
	int a=0;
	if(x<2)
		return 0;
	else
		for(int i=2;i<sqrt(x);i++)
		{
			if(x%a==0)
				a++;
		}
		if(a==0)
			return 1;
		else return 0;
}