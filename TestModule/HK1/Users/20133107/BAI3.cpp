#include <stdio.h>
void nhap(int &a, int A[]);
void xuly(int a, int A[]);
int main ()
{
	int a,A[100];
	nhap(a,A);
	xuly(a,A);
	return 0;
}
void nhap(int &a, int A[])
{
	scanf("%d",&a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&A[i]);
	}
}
void xuly(int a, int A[])
{
	int d = 0;
	int vitri;
	for(int i =0; i< a-1; i++)
	{
		if(A[i-1] % 2 == 0 && A[i] % 2 != 0 && A[i+1] % 2 == 0)
		{
			d = 1;
		}
		if(A[i-1] % 2 != 0 && A[i] % 2 == 0 && A[i+1] % 2 != 0)
		{
			d = 1;
		}
	}
	for(int i = 1; i < a-1; i++)
	{
		if(A[i-1] % 2 == 0 && A[i] % 2 == 0 && A[i+1] % 2 != 0)
		{
			d = 0;
			vitri = i;
			break;
		}
		if(A[i-1] % 2 == 0 && A[i] % 2 == 0 && A[i+1] % 2 == 0)
		{
			d = 0;
			vitri = i;
			break;
		}
		if(A[i-1] % 2 == 0 && A[i] % 2 == 0 && A[i+1] % 2 == 0)
		{
			d = 0;
			vitri = i;
			break;
		}
		if(A[i-1] % 2 != 0 && A[i] % 2 != 0 && A[i+1] % 2 == 0)
		{
			d = 0;
			vitri = i;
			break;
		}
		if(A[i-1] % 2 != 0 && A[i] % 2 != 0 && A[i+1] % 2 != 0)
		{
			d = 0;
			vitri = i;
			break;
		}
		if(A[i-1] % 2 == 0 && A[i] % 2 != 0 && A[i+1] % 2 != 0)
		{
			d = 0;
			vitri = i;
			break;
		}
	}
	if(d == 1)
	{
		printf("%d",-1);
	}
	if(d == 0)
	{
		printf("%d",vitri);
	}
}
