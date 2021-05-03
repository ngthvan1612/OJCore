#include <stdio.h>
void nhap(int A[], int &n);
#define size 100
int chanle(int A[], int n);
void xuat(int kq);
void main()
{
	int A[size],n;
	nhap(A,n);
	int kq=chanle(A,n);
	xuat(kq);

}
void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int chanle(int A[], int n)
{
	for (int i=0; i<n; i++)
	{
		if (A[i]%2==0 && A[i+1]%2==0)
			return i;

		else 
		{
			if(A[i]%2!=0 && A[i+1]%2!=0)

		
				return i+1;
			else 
			{
				if((A[i]%2!=0 && A[i+1]%2==0)||(A[i]%2!=0 && A[i+1]%2==0))
					return -1;
			}
		
		}
	}

}
void xuat(int kq)
{
	printf("%d",kq);
}