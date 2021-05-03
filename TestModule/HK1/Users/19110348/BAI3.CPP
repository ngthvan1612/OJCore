
#include<stdio.h>

void nhap(int A[], int &n);
void xuLi(int A[], int n);

void main()
{
	int A[200];
	int n;
	nhap(A,n);
	xuLi(A,n);
}

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}

void xuLi(int A[], int n)
{
	int kq=0;
	for(int i=0; i<n; i++)
	{
		/*if(i=n-1)
		{
			if ((A[i] %2==0 && A[i+1] %2==0) || (A[i] %2==1 && A[i+1] %2==1))
		{
			kq=i+2;
			break;
		}
		else
			kq=-1;
		}*/

		if ((A[i] %2==0 && A[i+1] %2==0) || (A[i] %2==1 && A[i+1] %2==1))
		{
			kq=i+1;
			break;
		}
		else
			kq=-1;
		/*if(A[i] % 2 == 0 && A[i+1]%2==1  || A[i] % 2 ==1 && A[i+1] %2==0)
			kq=-1; */
	}
	printf("%d", kq);
}

