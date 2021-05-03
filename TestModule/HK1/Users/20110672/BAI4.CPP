#include <stdio.h>
int laNT(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			dem+=1;
		if(dem==2) return 1;
		else return 0;
}
int tongMin(int A[][100],int m,int n)
{
	int tong[100];
	int i;
	for(i=0;i<m;i++)
	{
		tong[i]=0;
		for(int j=0;j<n;j++)
			if(laNT(A[i][j])==1) 
				tong[i]+=A[i][j];
	}
	int min=tong[0];
	for(i=0;i<m;i++)
		if(tong[i]<min) 
			min=tong[i];
	return min;
}
void main()
{
	int m,n,A[100][100];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
		int kq=tongMin(A,m,n);
		printf("%d",kq);
}
