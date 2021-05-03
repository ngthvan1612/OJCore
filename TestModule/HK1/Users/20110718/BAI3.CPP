#include<stdio.h>
int kiemTra(int A[],int n);
void nhap(int A[],int &n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kiemTra(A,n);
	printf("%d",kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
    for(int i=0;i<n-1;i++)
	{
		scanf("%d",&A[i]);
}
int kiemTra(int A[],int n)
{
	int dem=-1;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0&&A[i+1]%2==0||A[i]%2!=0&&A[i+1]%2!=0)
			return i;
	}
	return dem;
}


