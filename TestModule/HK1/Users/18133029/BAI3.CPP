#include<stdio.h>

int sochan(int x)
{
	if(x %2 ==0)
		return 1;
	else return 0;
}
int kiemtra(int a[], int n)
{
	
	for(int i=0; i<n ; i++)
	{
		if(sochan(a[i]) == 0 && sochan(a[i+1]) != 1)
		{
			return i+1;
		}
		if(sochan(a[i]) == 1 && sochan(a[i+1]) != 0)
		{
			return i+1;
		}
		
		//else return a[i];
	}
	return -1;
}
void xuat(int t)
{
	printf("%d",t);
}
void main()
{
	int n, a[100];
	scanf("%d",&n);
	for(int i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int t = kiemtra(a,n);
	xuat(t);
}