#include<stdio.h>
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int kiemtra(int  n,int A[])
{
	int t=0;
	int x[100];
	int i=0;
	for(int j=0;j<n-1;j++)
	{
		if((A[j]%2==0 &&  A[j+1]%2!=0) ||  (A[j]%2!=0 && A[j+1]%2==0))
		{
			t++;
		}
		else
		{
			t--;
			x[i]=j+1;
			i++;
		}
	}
	if(t==n)
		return -1;
	else 
	{
		int min=x[0];
		for(int p=0;p<i;p++)
		{
			if(min>x[p])
				min=x[p];
		}
		return  min;
	}
}
void xuat(int kt)
{
	printf("%d", kt);
}
void main()
{
	int n;
	int A[100];
	nhap(n,A);
	
	int kq=kiemtra(n,A);
	xuat(kq);
}