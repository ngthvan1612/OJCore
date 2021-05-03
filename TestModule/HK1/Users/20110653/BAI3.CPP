#include <stdio.h>
void nhap(int A[], int &n);
int xuli(int A[], int n);
void main()
{
	int A[100], n;
	nhap(A, n);
	int kq  = xuli(A, n);
}
int xuli(int A[], int n)
{
	int flag;
	for(int i  = 0; i < n - 1; i++)
	{
		flag = 1;
		if((A[i] + A[i+1]) %2 != 0 && (A[i] + A[i - 1]) % 2 != 0)
		{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		return 1;
	return 0;
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n - 1; i++)
		scanf("%d", &A[i]);
}