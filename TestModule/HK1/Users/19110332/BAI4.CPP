#include<stdio.h>
bool lant(int x);
int xl(int A[][102], int m, int n, int B[]);
int main()
{
	int m, n, A[102][102];
	int B[102];
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&A[i][j]);
	printf("%d",xl(A, m, n, B));
	return 0;

}
int xl(int A[][102], int m, int n, int B[])
{
	int nb=0;
	int max;
	int tong;
	for(int i=0; i<m; i++)
	{
		tong =0;
		for(int j=0; j<n; j++)
			if(lant(A[i][j]))
			{
				tong+=A[i][j];
			}
		B[i]=tong;
		nb++;
	}
	//for(int k=0; k<nb; k++)
	//	printf("%d",B[k]);
	if(nb==0)
		return 0;
	else
	{
		max=B[0];
		for(int k=0; k<nb; k++)
			if(B[k]>0 && max>B[k])
				max=B[k];
	return max;
	}
}
bool lant(int n)
{
	int u=0;
	if(n==1)
		return false;
	for(int i=2; i<n; i++)
		if(n%i==0)
			u++;
	if(u==0)
		return true;
	return false;
}