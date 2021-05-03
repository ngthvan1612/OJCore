#include <stdio.h>
#include <math.h>
void input (int A[], int &n)
{
	scanf ("%d",&n);
	for (int i =0 ; i<n; i++)
		scanf ("%d",&A[i]);
}
int  kt (int A[], int n)
{int j;
	for (int i =0 ; i<n-1; i ++)
	{
		if (abs (A[i]-A[i+1])%2>0)
		
		j =-1;
			
		
		else 
		
		{
			j =i+1;break;
		}
	}


return j;
}
void output (int x)
{
	printf ("%d",x);
}
void main()
{
	int A[100],n;
	input (A,n);
	int kq=kt(A,n);
	output (kq);
	
}