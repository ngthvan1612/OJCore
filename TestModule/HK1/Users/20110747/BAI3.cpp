#include<stdio.h>
void xuat(int kq);
int xenke(int n,int A[]);
int kt(int n);
void nhap(int &n,int A[]);
void main()
{
	int n,A[100];
	nhap(n,A);
	int kq=xenke(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kt(int n)
{
	if(n%2!=0)
		return 0;
	else
		return 1;
}
int xenke(int n,int A[])
{
	for(int i=0;i<n-1;i++)
	{
		if(kt(A[i])==0&&kt(A[i+1])==0||kt(A[i])==1&&kt(A[i+1])==1)
			return 2;
	}
	return -1;
}
void xuat(int kq)
{
	if(kq==-1)
	printf("-1");
	if(kq==2)
		printf("2");
}