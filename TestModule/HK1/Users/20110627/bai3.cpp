#include<stdio.h>
void nhap(int A[],int &n);
int kiemTra(int A[],int n);
int chanLe(int A[],int n);
void xuat(int kq);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kt=chanLe(A,n);
	xuat(kt);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int kiemTra(int A[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
		if(((i%2==0 && A[i]%2==0) || (i%2==0 && A[i]%2==1)) && (((i+1)%2==1 && A[i+1]%2==1) || (i+1)%2==1 && A[i+1]%2==0 ))
			d=d+1;
	if(d=n)
		return 1;
	return 0;
		
}
int chanLe(int A[],int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(kiemTra(A,n)==1)
			t=-1;
		else if((i%2==0 && A[i]%2==0) || (i%2==0 && A[i]%2==1))
			t++;
	}
	return t;
}
void xuat(int kq)
{
	printf("%d",kq);
}
