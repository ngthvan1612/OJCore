#include<stdio.h>
void nhap(int A[],int &n);
void xuat(int s);
int kiemtra(int x);
int vt(int A[],int n);




void main()
{
	int n;
	int A[100];
	nhap(A,n);
	int kt=vt(A,n);
	xuat(kt);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int s)
{
	printf("%d",s);
}
int kiemtra(int x)
{
	if(x%2==0) return 1;
	else return 0;
}
int vt(int A[],int n)
{
	int vitri=-1;
	for (int i=0;i<n;i++)
	{
		if (kiemtra(A[i])==kiemtra(A[i+1])
		{
			vitri=i+1;
			break;
		}

	}
	return vitri;
}