#include<stdio.h>
int xuLy(int A[],int n);
void nhap(int A[],int &n);
void xuat(int kq);
void main()
{

	int A[100];
	int n;
	nhap(A,n);
	int kq=xuLy(A,n);
	xuat(kq);

}
int xuLy(int A[],int n)
{
	int kq;

	for (int i=0;i<n-1;i++)
	{
		if ((A[i] %2 ==0 && A[i+1] %2==1 ) || (A[i] %2 ==1 && A[i+1] %2==0 ))
		{
			kq=-1;
		}
		else
		{
			kq=i+1;
			break;
		}
	}
	return kq;
}
void nhap(int A[],int &n)
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
void xuat(int kq)
{
	printf("%d",kq);
}
