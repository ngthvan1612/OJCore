#include<stdio.h>
#define size 100
void nhap(int a[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n;i++)
		scanf("%d", &a[i]);
}
int check(int a)
{
	if (a%2 ==0)
		return 1;//chan
	return 0; //le

}
int tinh(int a[], int n)
{
	int kq = -1;
	for(int i=0; i<n-1; i++)
	{
		if(check(a[i])==1)
			if(check(a[i+1])==0)
				kq=-1;
			else
				return i+1;
		else
			if(check(a[i+1]==1))
				kq=-1;
			else
				return i+1;


	}
	return kq;
}
void xuat(int x)
{
	printf("%d", x);
}

void main()
{
	int a[size],n;
	nhap(a,n);
	int kq = tinh(a,n);
	xuat(kq);
}