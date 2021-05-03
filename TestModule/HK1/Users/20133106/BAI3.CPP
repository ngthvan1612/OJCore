#include<stdio.h>
void xuat(int kq);
void nhap(int a[],int &n);
int chanle(int a[],int n);

void main()
{
	int a[100];
	int n;
	nhap(a,n);
	int kq=chanle(a,n);
	xuat(kq);
}
void nhap(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
}
int chanle(int a[],int n)
{
	int d=-1;
	for(int i=0;i<n-1;i++)
	{   if(((a[i]%2==0)&&(a[i+1]%2==0))||((a[i]%2==1)&&(a[i+1]%2==1)))
	          return i+1;
	} 
	   
	return d;
	       
}
void xuat(int kq)
{
	printf("%d",kq);
	
}