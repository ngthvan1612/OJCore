#include<stdio.h>
void xuat(int kq);
int chanle(int n, int A[]);
void nhap(int &n,int A[]);
void main()
{
	int n,A[100];
	nhap(n,A);
	int kq=chanle(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int chanle(int n, int A[])
{
	int k=0;
	while (n>=0)
	{
	
		for (int i=0;i<n;i++)
			{
			if (A[i]%2==0||(A[i+1]%2)!=0&&(A[i+1]%2)!=0)
					k=i;
			else 
					k=-1;
			}
	}
	return k;
}
void xuat(int kq)
{
	printf("%d",kq);
}
