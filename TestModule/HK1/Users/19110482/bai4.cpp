#include<stdio.h>
int ktsnt(int a);
int xuli(int n,int m, int A[][100],int B[]);
void xuat(int n,int B[]);
int main()
{
	int m,n,A[100][100],B[100];
	scanf("%d",&m);
	scanf("%d",&n);
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	   {
	   	scanf("%d", &A[i][j]);
	   }
	   xuli(n,m,A,B);
	   xuat(n,B);
}
int ktsnt(int a)
{
	int dem1=0;
	int dem=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			dem1=dem1+1;
		}
	}
	if(dem1==2)
	{
		dem=dem+1;
		return 1;
	}
	else 
	{
		return 0;
	}
	
}
int xuli(int n,int m, int A[][100],int B[])
{
	 
		for(int i=0;i<m;i++)
		{
			int dem=0;
		   int tong =0; 
	       for(int j=0;j<m;j++)
	       {
	       	if(ktsnt(A[i][j])==1)
	       	   {
	       		  tong +=A[i][j];
			   }
		   }
		   B[dem]=tong;
		   dem++;
	   }
}  
void xuat(int n,int B[])
{
	int min;
	for(int i=2;i<n;i++)
	{
		if(min<B[i])
		{
			min=B[i];
		}
	}
	printf("%d",min);
}
