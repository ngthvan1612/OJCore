#include <stdio.h>
#define size 100

void nhap(int &n, int A[]);
bool isChan(int a);
int checkMang(int n, int A[]);
void xuat(int kq);

int main()
{
	int A[size],n;
	nhap(n,A);

	int kq =checkMang(n,A);
	xuat(kq);
	return 0;
}

void xuat(int kq)
{
	printf("%d",kq);
}

int checkMang(int n, int A[])
{
	for(int i=1;i<n;i++)
	{
		if(isChan(A[i-1]) == 1)
		{
			if(isChan(A[i]) == 1)
				return i;
		}
		else 
		{
			if(isChan(A[i]) == 0)
				return i;
		}

	}
	return -1;
}

bool isChan(int a)
{
	if(a %2==0)
		return 1;
	else 
		return 0;
}

void nhap(int &n, int A[])
{
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}