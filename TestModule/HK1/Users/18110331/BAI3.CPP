#include <stdio.h>
#define MAX 100
#include <math.h>
int KiemTraChanLe(int A[], int n);
int LaChan(int x);
int LaLe(int x);
void nhap(int A[], int &n);
void xuat(int kq);

void main()
{
	int n, A[MAX];
	nhap(A, n);
	int kq = KiemTraChanLe(A, n);
	xuat(kq);
}

void nhap(int A[], int &n)
{
	scanf("%d", &n);

	do
	{
		if(n <=0 || n >=100)
		{
			printf("Nhap sai. Vui long kiem tra lai.");
			break;
		}
	}while(n <= 0 || n >= 100);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

int LaChan(int x)
{
	if( x%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int LaLe(int x)
{
	if( x%2 == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int KiemTraChanLe(int A[], int n)
{
	int vt = 0;

	for(int i = 0; i < n; i++)
	{
		if(((LaChan(A[i]) == 1) && (LaLe(A[i +1]) == 1)) || ((LaLe(A[i]) == 1) && (LaChan(A[i +1]) == 1)))
		{
			vt = -1;
		}

		else
		{
			vt = i;
		}
	}

	return vt;
}

void xuat(int kq)
{
	printf("%d", kq);
}
