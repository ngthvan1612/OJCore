#include<stdio.h>
void nhap(int &n,int A[]);
int kiemtra(int n,int A[]);
void xuat(int kq);
void main()
{
	int n,A[101];
	nhap(n,A);
	int kq=kiemtra(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		scanf("%d",&A[j]);
	}
}
int kiemtra(int n,int A[])
{
	int vt=-1;
    for(int i=0;i<n-1;i++)
	{
		if((A[i]%2==0 && A[i+1]%2!=0) || (A[i]%2!=0 && A[i]%2==0))
		{
			 vt=-1;
		}
		else if ((A[i]%2==0 && A[i+1]%2==0) || (A[i]%2!=0 && A[i+1]%2!=0))
        {
			 vt=i+1;
			 return vt;
		}
	}
	return vt;
}
void xuat(int kq)
{
	printf("%d",kq);
}

