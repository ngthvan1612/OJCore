#include<stdio.h>
void nhap(int a[], int &n);
int bailam(int a[], int n);
void main()
{
	int n,a[100];
	nhap(a,n);
	bailam(a,n);
}
void nhap(int a[], int &n)
{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
}
int bailam(int a[], int n)
{	
	int t=0;
	int x=0;
	while(x<n)
	{
			if(a[x]%2==0 && a[x+1]%2!=0)
				{
					t=-1;
				}
			else if(a[x]%2!=0 && a[x+1]%2==0)
				{
					t=-1;
				}
			else {
				t++;}
		x++;
	}
	printf("%d",t);
	return 0;
}