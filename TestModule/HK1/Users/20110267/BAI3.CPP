#include<stdio.h>

void nhap(int &na, int a[])
{
	scanf("%d",&na);
	for(int i=0; i<na; i++)
	{
		scanf("%d",&a[i]);
	}
}
int KT( int na, int a[])
{
	int dem=0;
	for(int i=0;i<na-1; i++)
	{
		
		if((a[i]+a[i+1])%2!=0)
		{
		dem++;
		}
		else
			return i+1;

	}
	if(dem==na-1)
		return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}
void main()
{
	int na,a[150];
	nhap(na,a);
	int kq=KT(na,a);
	xuat(kq);
}		
