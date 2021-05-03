#include<stdio.h>
void nhap(int A[],int &n);
int ktra(int A[],int n);
int laSoChan(int a);
void xuat(int kq);
int main()
{
	int A[120],n;
	nhap(A,n);
	int kq=ktra(A,n);
	xuat(kq);
	return 0;
}
int laSoChan(int a)
{
	if(a%2==0)
		return 1;
	return 0;
}
int ktra(int A[],int n)
{
	for(int i=0, j=1;i<n-1,j<n;i++,j++)
		if(laSoChan(A[i])==0&&laSoChan(A[j])==0)
			return i+1;
		else
			if(laSoChan(A[i])==1&&laSoChan(A[j])==1)
				return i;
	return -1;
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}