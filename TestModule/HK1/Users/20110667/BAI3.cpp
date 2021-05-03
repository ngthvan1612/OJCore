#include<stdio.h>
void nhap(int a[],int &n);
int CL(int n);
int ktraCL(int a[],int n);
void xuat(int kq);
void main()
{
	int a[100];
	int n;
	nhap(a,n);
	int kq= ktraCL(a,n);
	xuat(kq);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int CL(int n)
{
	if (n%2==0)
		return 1;
	return 0;
}
int ktraCL(int a[],int n)
{
	int i=1;
	if(a[0] % 2==0)
	{
		while(i<n)
		{
			if(i<n && CL(a[i])==1)
				return i;
			i++;
			if(i<n && CL(a[i])==0)
				return i;
			i++;
		}
	}
	else
	{
		while(i<n)
		{
			if(i<n && CL(a[i])==0)
				return i;
			i++;
			if(i<n && CL(a[i])==1)
				return i;
			i++;
		}
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d",kq);
}