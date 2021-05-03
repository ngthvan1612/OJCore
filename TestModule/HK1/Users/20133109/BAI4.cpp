#include<stdio.h>
#include<math.h>
int A[100][100], B[100], i ,j ,a, b, d;
void nhap();
int check();

int main()
{
	nhap();
	for(i=0;i<a;i++)
	{
		d=0;
		for(j=0;j<b;j++)
		{
		check();
		B[i]= d;
		}
	}
	int e=1000000;
	for(int l=0;l<a;l++)
	{
		if(B[l]<=e) e=B[l];
	}
	printf("%d", e);
	
}
void nhap()
{
	scanf("%d %d", &a, &b);
	for(int n=0;n<a;n++)
		{
			for(int m=0; m<b; m++)
			scanf("%d", &A[n][m]);
		}
}
int check()
{
	int c=0;
	if(A[i][j]==1) c=1;
	else
	{
	
		for(int k=2; k<=sqrt(A[i][j]); k++)
		{
			if(A[i][j]%k==0) c++;
		}
		if(c==0) d=d+A[i][j];
	}
}
