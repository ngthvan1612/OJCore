#include  <stdio.h>
int kt(int a);
void main()
{
	int m,n,B[100],tam;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		scanf("%d",&tam);
			if (kt(tam)==1) B[i]=B[i]+tam;
	}
	int tam1=B[0];
	for(int p=0;p<n;p++)
		if (B[p]<tam1) tam1=B[p];
	printf("0");
}
int kt(int a)
{
	if ((a==0)||(a==1)) return 0;
	int j1=0;
	for (int i1=1;i1<a;i1++)
		if (a%i1==0) j1=j1+1;
		if (j1==2) return 1; else return 0;
}