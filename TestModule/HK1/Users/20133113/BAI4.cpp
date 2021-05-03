#include<stdio.h>
int nguyento(int n)
{
	int t=0;
	for (int i=1;i<=n;i++)
		if (n%i==0) t++;
	if(t==2) return 1;
	else return 0;
}
int main()
{
	int A[200][200];
	int m,n;
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
		 scanf("%d",&A[i][j]);
	int B[200],k=0;
	for( int i=0;i<m;i++)
	{
		 int t=0;
		 for (int j=0;j<n;j++) 
			if (nguyento(A[i][j])==1) t=t+A[i][j];
			B[k++]=t;
	}
	int min=B[0];
	for (int l=0;l<k;l++)
		if (min> B[l]) min=B[l];
	printf("%d",min);
	return 0;
}
