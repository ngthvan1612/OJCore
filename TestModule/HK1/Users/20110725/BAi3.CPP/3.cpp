
#include<stdio.h>

void nhap(int &n, int A[]);
int xuly(int n, int A[]);
void xuat(int kt);

void main()
{
	int n,A[100];
	nhap(n,A);
	int kt=xuly(n,A);
	xuat(kt);
}

void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}

int xuly(int n, int A[])
{
	int dem = 0;
	if(A[0] % 2 == 0)
	{
		for(int i = 0; i < n; i++)
		{
			if(A[i] % 2 == 0 && A[i+1] % 2 != 0)
				dem++;
			else
				dem = i;
		}	
	}
	else if(A[0] % 2 != 0)
	{
		for(int i = 0; i < n; i++)
		{
			if(A[i] % 2 != 0 && A[i+1] % 2 == 0)
				dem++;
			else
				dem = i;
		}
			
	}
	if(dem == n-1)
		return -1;
	return dem;
}

void xuat(int kt)
{
	printf("%d", kt);
}