#include<stdio.h>
void nhap(int A[100],int &m);
int xuly(int A[100],int m);
void xuat(int kq);
void main()
{
	int A[100],m;
	nhap(A,m);
	int kq= xuly(A,m);
	xuat(kq);
}
void nhap(int A[100],int &m)
{
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&A[i]);
}
int xuly(int A[100],int m)
{
	int t=0;
	int k=0;
	int h=0;
	for(int i=1;i<m;i++)
	{
		if((A[i]%2==0&&A[i-1]%2==0)||(A[i]%2!=0&&A[i-1]%2!=0))
		{	h++;
		k=i;
		}
	}
	if(h==0)
		return -1;
	return k;
}
void xuat(int kq)
{
	printf("%d",kq);
}