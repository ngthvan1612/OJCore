#include<stdio.h>

void nhap(int A[], int &n);
int kiemtra(int A[], int n);
void xuat(int kiemtra);

int main()
{
	int A[100];
	int n;
	nhap(A, n);
	int kq = kiemtra(A, n);
	xuat(kq);
	return 0;
}

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}

int kiemtra(int A[], int n)
{
	int dem = 0;
	int i;
	for(i = 1; i < n; i++)
	{
		if(i <= n - 2)
		{
			if((A[i - 1] % 2 != 0 && A[i] % 2 == 0 && A[i + 1] % 2 != 0) || (A[i - 1] % 2 == 0 && A[i] % 2 != 0 && A[i + 1] % 2 == 0))
			{
				dem++;
			}
			else
			{
				i = i + 1;
				return i;
				break;
			}
		}
		else
		{
			if((A[i - 1] % 2 != 0 && A[i] % 2 == 0) || (A[i - 1] % 2 == 0 && A[i] % 2 != 0))
				dem++;
			else
			{
				i = i + 1;
				return i;
				break;
			}
		}

	}
	if(dem == n - 1)
		return -1;
	return 0;
}

void xuat(int kiemtra)
{
	printf("%d", kiemtra);
}

