#include<stdio.h>

int snt(int x)
{
	int i,d=0;
	for(i=1; i<=x; i++)
		if(x%i==0) d++;
	if(d==2) return 1; else return 0;

}
int main()
{
	int i,j ,m,n, a[100][100], b[100];
	for(i=0; i<m; i++)
	{
		b[i]=0;
	}
	scanf("%d%d",&m,&n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			if(snt(a[i][j])) b[i]+=a[i][j];
	}
	int min=b[0];
	for(i=1; i<m; i++)
	{
		if(b[i]<min) min=b[i];
	}
	printf("%d", min);
	return 0;
}