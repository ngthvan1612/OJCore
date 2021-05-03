#include<stdio.h>
int k, l, A[100], B[100], C[100], n, g ,h ,o ,p;
void nhap();
int check();

int main()
{
	nhap();
	check();
}
void nhap()
{
	scanf("%d", &n);
	for(int m=0;m<n;m++)
	{
		scanf("%d", &A[m]);
	}
}
int check()
{
	k=-1;
	l=-1;
	for(int i=0;i<=n;i=i+2)
	{
		k++;
		B[k]=A[i];
	}
	for(int j=1;j<=n;j=j+2)
	{
		l++;
		C[l]=A[j];
	}
	for(int o=o;o<k;o++)
	{
		if(B[o]%2==0 ) g=1;
		else g=2;
	}
	for(int p=0;p<l;p++)
	{
		if(C[p]%2==0) h=1;
		else h=2;
	}
	if(g!=h) printf("-1");
	
}
