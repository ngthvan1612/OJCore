#include<stdio.h>

void nhapMang(int A[], int &n);
void xuat(int kq, int n);
int kiemTra(int A[], int n);

int main()
{
	int A[150];
	int n;
	nhapMang(A,n);
	int kq = kiemTra(A, n);
	xuat(kq,n);
	return 0;
}
void xuat(int kq, int n)
{
	int a=-1;
	if (kq==n-1)
		printf("%d", a);
	else 
		printf("%d", kq+1);
}
int kiemTra(int A[], int n)
{
	int kq = 0;
	for (int i=0; i<n-1; i++)
	{
		if ((A[i]%2==0 && A[i+1]%2!=0) || (A[i]%2!=0 && A[i+1]%2==0))
			kq += 1;
		else 
			break;
	}
	return kq;
}
void nhapMang(int A[], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}