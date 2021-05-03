#include<stdio.h>
int laNT(int a);
void tinh(int A[100][100], int n, int m);
void main()
{
	int n, m;
	int A[100][100];
	scanf("%d%d", &n, &m);
	for (int i =0; i<n; i++)
		for (int j =0; j<m; j++)
			scanf("%d", &A[i][j]);
		
	
	//printf("%d", laNT(6));
	tinh(A,n,m);
}
void tinh(int A[100][100], int n, int m)
{
	int tong =100;
	for (int i =0; i<n; i++)
	{
		int t =0;
		for (int j =0; j<m; j++)
			if(laNT(A[i][j])==1)
				t=t+A[i][j];
		if(t<tong)
			tong =t;

	}
	
	printf("%d", tong);
}
int laNT(int a)
{
	int dem=0;
	for(int i=2; i<=a;i++)
		if((a%i)==0)
			dem++;
	if(dem == 1)
		return 1;
	else 
		return 0;
}