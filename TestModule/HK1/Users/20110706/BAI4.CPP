#include <stdio.h>
#include <math.h>
void input (int A[][100], int &m, int &n)
{
	scanf ("%d%d",&m,&n);
	for (int i =0 ;i <m; i++)
	{
		 for (int j =0 ; j <n; j++)
			 scanf ("%d",&A[i][j]);
	}
}
bool soNgto(int x)
{ if (x<2)
return false;
{
	for (int i =2 ; i <= sqrt(x); i++)
		if (x%i==0)
			return false ;
}
return true;
}
int tinh (int A[][100], int m , int n)
{
	int min=0, tong;
	
	{for (int i =0 ; i<m ; i++)
	
		 tong =0;
		 for (int j =0 ; j <n; j++)
			 
		 
			 if (soNgto(A[0][j]))
				min+=A[0][j];
	}
	{
			 for (int i =1 ; i<m ; i ++)
              
			 {
				 for ( int j =0 ; j <n; j++)
			
			 if ( soNgto(A[i][j]))
				 tong +=A[i][j];
			 if (tong <=min)
			
			 
				 min =tong ;
			
			 }


	}
	return min;
}
void output (int h)
{
	printf ("%d",h);
}
void main()
{
	int A[100][100], m,n;
	input(A,m,n);
	int kq =tinh(A,m,n);
	output (kq);
}