#include<stdio.h>
void Xuat(int kt, int flag);
int Xuly(int A[], int n, int &flag);
void Nhap(int A[], int &n);

void main()
{
	int A[101], n, flag =0;
	Nhap(A, n);
	int kt=Xuly(A, n, flag);
	Xuat(kt, flag);
}

void Nhap(int A[], int &n)

{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}

int Xuly(int A[], int n, int &flag)
{
	for (int i=0; i<n-1; i++)
		if ((A[i] % 2==0 && A[i+1] %2 == 0) || (A[i] % 2 != 0 && A[i+1] %2 !=0))
		{
			flag =i+1;
			return 0;
		}
	return 1;
}

void Xuat(int kt, int flag)
{
	if (kt==1)
		printf("-1");
	else 
		printf("%d", flag);
}


