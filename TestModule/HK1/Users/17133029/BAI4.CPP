#include<stdio.h>
int SNT(int a);
void main()
{
	int A[100][100];
	int m,n;
	int a,b,c,d,e;
	scanf("%d%d",&m,&n);
	for(int i=0; i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	}
	a = A[0][0];
	for (int j=1;j<=n;j++)
	{
		if(SNT(A[0][j]))
			a = a + A[0][j];
	}
	printf("%d",a);

}
int SNT(int a)
{
	int d=0;
	for(int i=1; i<=a;i++)
	{
		if(a%i==0)
			d=d++;
	}
	if(d==2)
		return 1;
	return 0;
}
