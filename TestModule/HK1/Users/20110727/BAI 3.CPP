#include<stdio.h>
int chanle(int a[],int n);
void nhapmang(int a[],int &n);
void main()
{
	int n,a[100];
	nhapmang(a,n);
	int kq=chanle(a,n);
	printf("%d",kq);
}
void nhapmang(int a[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int chanle(int a[],int n)
{   int flag=1;
    int i;
	int h=i+1;
	for(i=0;i<n-1;i++)
	{
		if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2==1&&a[i+1]%2==1))
		{
			flag=0;
			break;
		}
		
	}
	if(flag==0)
	{
		return h;
	}
	else return -1;
}