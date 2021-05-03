#include<stdio.h>


void nhap(int a[], int &n);
int main()
{
	int a[100];
	int n;
	nhap(a,n);
	int vt=-1;
	for(int i=0;i<n-1;i++)
	{
		if((a[i]%2==0 && a[i+1]%2==0) || (a[i]%2!=0 && a[i+1]%2!=0))
		{
			vt= i+1;
			break;
		}
	}
	printf("%d",vt);
	return 0;
}

void nhap(int a[], int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
