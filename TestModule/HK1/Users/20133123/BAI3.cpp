#include<stdio.h>
#define S 50
void nhap(int &n,int a[]);
int tong(int n,int a[]);
void xuat(int kq);
void xuat(int kq);
void nhap(int &n,int a[])
{
	scanf("%D",&n);
		for(int i=0; i<n ;i++)
			scanf("%d",&a[i]);
}

int main()
{
	int n,a[S];
	nhap(n,a);
	int kq = -1;
	xuat(kq);
	return 0;
}

void xuat(int kq)
{
	printf("%d",kq);
}
