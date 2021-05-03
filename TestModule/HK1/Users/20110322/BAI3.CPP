#include<stdio.h>
#define N 100

void nhap(int A[], int &a);
int xuli(int A[], int a);
void xuat(int kq);

void main()
{
	int A[N], a;
	nhap(A, a);
	int kq = xuli(A, a);
	xuat(kq);
}

void nhap(int A[], int &a)
{
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		scanf("%d", &A[i]);
}

int xuli(int A[], int a)
{
	int t = 0;
	int ViTri = 0;
	for (int i = 0; i < a - 1; i++)
		if (((A[i] % 2 == 0) && (A[i+1] % 2 == 1)) || ((A[i] % 2 == 1) && (A[i+1] % 2 == 0)))
		{
			t++;
		}
		else 
		{
			ViTri = i+1;
			break;
		}
	if (t != a - 1)
		return ViTri;
	else
		return -1;
}

void xuat(int kq)
{
	printf("%d", kq);
}