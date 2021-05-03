#include<stdio.h>

void Nhap(int A[], int &n);
int KiemTra(int A[], int n);
void Xuat(int kq);

void main()
{
	int A[200], n;
	Nhap(A,n);
	int kq = KiemTra(A,n);
	Xuat(kq);
}

void Nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i<n;i++)
		scanf("%d", &A[i]);
}

int KiemTra(int A[], int n)
{
	int tam = 1;
	int vitri = 1; 
	for(int i = 1; i< n;i++)
		if((A[i] % 2 == 0 && A[i-1] %2 == 0) || ( A[i] %2 != 0 && A[i-1] %2 !=0))
		{
			tam = 0;
			vitri = i;
			break;
		}

	if(tam == 1)
		return -1;
	return vitri;
}

void Xuat(int kq)
{
	printf("%d", kq);
}