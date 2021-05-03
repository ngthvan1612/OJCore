#include<stdio.h>
void nhap( int&n, int A[100]);
void xuat( int x);
void xet( int n, int A[100], int&x);

void main()
{

	int n, int A[100];
	nhap(n,A);
	int x;
	xet(n,A,x);
	xuat(x);
}
   void nhap( int&n, int A[100])
   {
	   scanf("%d",&n);
	   for(int i=0; i<n;i++)
	    scanf("%d", &A[i]);
   }
    void xuat( int x)
	{ printf("%d", x);
	}
	void xet( int n, int A[100], int&x)
	{
		x=-1;
		for( int i =1; i<n; i++)
		{
			if(((A[i]%2)==0)&&((A[i-1]%2)==0))
			{
				x= i;
					break;
			}
			if(((A[i]%2)!=0)&&((A[i-1]%2)!=0))
			{
				x= i;
				break;
			}
		}
		
	}
		     