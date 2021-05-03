#include <stdio.h>
#include <math.h>
void nhap(int A[],int &n);
int kiemtra(int A[],int n);
void xuat(int ketqua);
int main()
{
	int A[100],n;
	nhap(A,n);
	int ketqua=kiemtra(A,n);
	xuat(ketqua);
	return 0;
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kiemtra(int A[],int n)
{
	int r=0;
	for(int i=0;i<n-1;i++)
	{
		if(abs(A[i]-A[i+1])%2!=0)
		{
			r=1;
		}
		else
		{
			r=2;
			return i+1;
		}
	}			
	if(r==1)
		return -1;
}
void xuat(int ketqua)
{
	printf("%d",ketqua);
}