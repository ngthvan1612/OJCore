#include <stdio.h>
#define size 100
void NhapMang (int A[],int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
}
bool CheckChan(int n)
{
	if (n%2==0)
		return true;
}
bool CheckLe(int n)
{
	if (n%2==0)
		return false;
}
int xuly (int A[], int n)
{
	int flag=0;
	for (int i=0; i<n-1; i++)
	{
		if (CheckChan(A[i]) && CheckLe(A[i+1]) || CheckLe(A[i]) && CheckChan(A[i+1]))
		{
			flag=-1;
		}
		else
		{
			return i+1;
		}
	}
	if (flag==-1)
	{
		return -1;
	}
}
void main()
{
	int A[size],n;
	NhapMang(A,n);
	printf("%d",xuly(A,n));
}

