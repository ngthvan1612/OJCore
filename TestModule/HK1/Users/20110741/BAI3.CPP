#include <stdio.h>
int XuLi(int n, int A[]);
void nhap(int &n, int A[]);
int main()
{
	int n,A[200];
	nhap(n,A);
	int kq=XuLi(n,A);
	printf("%d",kq);
	return 0;
}
int XuLi(int n, int A[])
{
	if(A[0]%2!=0)
	{
		for (int i=0;i<n;i++)
		{
			if (i%2==0)
			{
				if(A[i]%2==0) return i;
			}
			else
			{
				if( A[i]%2!=0) return i;
			}

		}
		return -1;
	}
	else
	{
		for (int i=0;i<n;i++)
		{
			if (i%2==0)
			{
				if(A[i]%2!=0) return i;
			}
			else
			{
				if( A[i]%2==0) return i;
			}

		}
		return -1;
	}
}
void nhap(int &n, int A[])
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}