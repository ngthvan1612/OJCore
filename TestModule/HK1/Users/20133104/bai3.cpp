#include<stdio.h>
int vitridautien(int x);
int check(int A[],int n);
void nhap(int A[],int &n);
void xuat(int t);
int main()
{
	int A[100];
	int n;
	nhap(A,n);
	int kq=check(A,n);
	xuat(kq);
}
int vitridautien(int x)
{
	if(x%2==0)
	return 1;
	else return 0;
}
int check(int A[],int n)
{
	if(vitridautien(A[0])==1)
	{
		for (int i=1;i<n;i=i+2)
		{
			if(A[i]%2==1)
			return -1;
		}
	}
	else if(vitridautien(A[0])==0)
	for (int i=1;i<n;i=i+2)
	{
		if(A[i]%2==1)
		return -1;
	}
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
}
void xuat(int t)
{
	printf("%d",t);
}