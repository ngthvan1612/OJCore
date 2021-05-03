#include<stdio.h>
void xuat(int kq);
void nhap(int A[100], int &n);
int ktr(int A[100], int n);
void main()
{
	int n;
	int A[100];
	nhap(A,n);
	int kq = ktr(A,n);
	xuat(kq);
}
void nhap(int A[100], int &n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}
int ktr(int A[100], int n)
{
	int kq;
	int vt1=-1,vt2=-1;
	int i;
	if (A[0] % 2 == 0 && A[1] % 2 == 1) 
	{
		for (i = 0; i < n; i+=2)
		
			if (A[i] % 2 == 1) 
			{
				vt1 = i;
				break;
			}
		
		for (i = 1; i < n; i+=2)
			if (A[i] % 2 == 0 ) 
			{
				vt2 = i;
				break;
			}
	}
	else if (A[0] % 2 == 1 && A[1] % 2 == 0)
	{
		for (i = 0; i < n; i+=2)
			if (A[i] % 2 == 0) 
			{
				vt1 = i;
				break;
			}
		
		for (i = 1; i < n; i+=2)
			if (A[i] % 2 == 1 ) 
			{
				vt2 = i;
				break;
			}
	}
	else return 1;
	if (vt1 != -1 || vt2 != -1) 
		if (vt1 == -1 && vt2 != -1) return vt2;
		else if (vt2 == -1 && vt1 != -1) return vt1;
		else if (vt1 < vt2) return vt1;
		else return vt2;
	else return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}