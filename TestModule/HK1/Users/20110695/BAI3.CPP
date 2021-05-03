#include<stdio.h>
#include<math.h>
void nhap(int &n,int A[]);
int chanle(int x);
int kiemtra(int n,int A[]);
void xuat(int kq);
void main()
{
	int n,A[100];
	nhap(n,A);
	int kq=kiemtra(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int chanle(int x)
{
	if(x%2==0)
		return 1;
	return 0;
}
int kiemtra(int n,int A[])
{
	for(int i=0;i<(n-1);i++)
		if((chanle(A[i])==1 && chanle(A[i+1])==1)||(chanle(A[i])==0 && chanle(A[i+1])==0))
			return i+1;
	return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}

