#include<stdio.h>
int chan(int x);
int ktra(int A[],int n);
void nhap(int A[],int &n);
void xuat(int x);
void main()
{
	int A[1000],n;
	nhap(A,n);
	int kq = ktra(A,n); 
	xuat(kq);
}
int chan(int x)
{
	if(x % 2 == 0)
		return 1;
	return 0;
}
int ktra(int A[],int n)
{
	int kq = -1;
	for(int i=0; i<n;i++)
	{
		if( chan(A[i]) == 1)
		{
			i++;
			if(	chan(A[i]) == 1)
			{
				return i+1;
			}
		}
		else
		{
			i++;
			if(	chan(A[i]) == 0 )
			{
				return i+1;
			}
		}
	}
	return kq;

		
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}