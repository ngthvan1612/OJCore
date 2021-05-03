#include<stdio.h>

void nhappMang(int a[],int n);
int ktraa(int a[],int n);
void xuat(int kq);
void main()
{
	int kq;
	int a[100];
	int n;
	scanf("%d",&n);
	nhappMang(a,n);
	ktraa(a,n);
	xuat(kq);

}
void nhappMang(int a[], int n){
	for(int i  = 0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int ktraa(int a[],int n)
{
	int flag,dem=0;
	for(int i=0;i<n;i++)
	{
		flag=1;
		if(a[i] %2!=0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;

}
void xuat( int kq)
{
	if(kq==1)
		printf("-1");
	else
		printf("2");
}
