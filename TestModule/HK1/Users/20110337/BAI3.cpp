#include<stdio.h>
int kiemTra(int A[], int n);
int cung_tinh_chan_le(int x, int y);
void nhapMang(int A[], int&n);
void xuat(int x);

void main()
{
	int A[100],n;
	nhapMang(A,n);
	int kq = kiemTra(A,n);
	xuat(kq);
}
int kiemTra(int A[], int n)
{
	int kq;
	int d = 0;
	for(int i=0; i<n-1; i++)
	{
		if(cung_tinh_chan_le(A[i],A[i+1]))
		{
			d++;
			kq = i + 1;
		}
	}
	if(d==0)
		kq = -1;
	return kq;
}
int cung_tinh_chan_le(int x, int y)
{
	if((x%2==0 && y%2==0) || (x%2==1 && y%2==1))
		return 1;
	return 0;
}
void nhapMang(int A[], int&n)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}