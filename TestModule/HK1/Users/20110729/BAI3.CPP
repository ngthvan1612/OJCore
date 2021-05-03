#include<stdio.h>

void nhap_mang(int A[],int &n);
void xuat(int kq);
int kt_chan_le(int A[],int n);

void main()
{
	int A[100]; int n;
	nhap_mang(A,n);
	int kq=kt_chan_le(A,n);
	xuat(kq);
}
void nhap_mang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
		scanf("%d",&A[i]);
}
int kt_chan_le(int A[],int n)
{
	int tr;
	if(A[0]%2==0)
		tr=0;
	else if(A[0]%2==1)
		tr=1;
	for(int i=1;i<=n-1;i++)
		if(tr==1)
		{
			tr=0;
			if(A[i]%2==1)
				return i;
		}
		else if(tr==0)
		{
			tr=1;
			if(A[i]%2==0)
				return i;
		}
	return -1;

}
void xuat(int kq)
{
	printf("%d ",kq);
}
