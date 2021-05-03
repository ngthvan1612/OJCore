#include<stdio.h>
#define s 100
void nhapmang(int a[],int &n);
int xuli(int a[],int n);
void xuat(int kq);
int main()
{
	int a[s],n;
	nhapmang(a,n);
	int kq=xuli(a,n);
	xuat(kq);
	return 0;	
}
void nhapmang(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int xuli(int a[],int n)
{
	int kq=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			a[i+1]%2==1;
		if(a[i]%2==1)
			a[i+1]%2==0;
	}
	return kq;
		
				
}
