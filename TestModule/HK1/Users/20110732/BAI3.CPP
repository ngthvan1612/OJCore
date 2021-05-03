#include<stdio.h>
void xuat(int kq);
void nhap(int &n, int A[]);
int kiemtra(int n, int A[]);
void main()
{
	int n, A[10];
	nhap(n, A);
	int kq=kiemtra(n, A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
int kiemtra(int n, int A[])
{
	int i;
	int dem=0;
	int sai=-1;
	for(i=0; i<n-1; i++)
	{
		if (  (A[i]%2==0&&A[i+1]%2==1) || (A[i]%2==1&&A[i+1]%2==0)  )
			dem=dem+1;
		else
		{
			sai=i;
			break;
		}
	}
	if(sai==-1)
		dem=-1;
	else
		dem=sai+1;
	return dem;
}
void xuat(int kq)
{
	printf("%d", kq);
}

