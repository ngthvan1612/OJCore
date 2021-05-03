#include<stdio.h>
void nhap(int a[], int &n);
int tinh(int a[],int n);
int xuly(int a[],int n);
void xuat(int t);
void main()
{
	int k;
	int a[1000],n;
	nhap(a,n);
	int t=tinh(a,n);
	int m=xuly(a,n);
	if(t==-1||m==-1)
		k=-1;
	else if(a[0]%2==0)
		k=t;
	else if(a[0]%2!=0)
		k=m;
	xuat(k);
}
void nhap(int a[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int tinh(int a[],int n)
{
	int t1=0;
	for(int i=0;i<n;i+=2)
	{
		if(a[i]%2==0&&a[i+1]%2!=0)
		t1++;
	}
		if(t1==n/2)
			return -1;
		return t1;
}
int xuly(int a[],int n)
{
	int t2=0;
	for(int i=0;i<n;i++)
		if(a[i]%2!=0&&a[i+1]%2==0)
			t2++;
		if(t2==n/2)
			return -1;
		 return t2;
}
void xuat(int t)
{
	printf("%d",t);
}