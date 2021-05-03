#include <stdio.h>


void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}

int kt(int n,int A[])
{
	int bien=0,gan;
	for(int i=0;i<n-1;i++)
		if(A[i]%2==0)
		{	if(A[i+1]%2!=0)
				bien=0;
			else 
			{	bien=1;
				gan=i+1;
				break;
			}
		}
		else
		{
			if(A[i+1]%2==0)
				bien=0;
			else
			{
				bien=1;
				gan=i+1;
				break;
			}
		}
	if(bien==0)
		return -1;
	else
		return gan;
}
void xuat(int x)
{
	printf("%d",x);
}

void main()
{
	int n,A[100];
	nhap(n,A);
	int Kq=kt(n,A);
	xuat(Kq);
}