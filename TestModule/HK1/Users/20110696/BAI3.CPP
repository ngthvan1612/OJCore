#include<stdio.h>
void nhap(int &n,int A[]);
int solve(int n,int A[]);
int ktchanle(int x);
void xuat(int kq);

void main()
{
	int n;
	int A[200];
	nhap(n,A);
	int kq=solve(n,A);
	xuat(kq);
}
void nhap(int &n,int A[])
{
	scanf("%d",&n);
	for (int i=0;i<n-1;i++)
		scanf("%d",&A[i]);
}
int solve(int n,int A[])
{
	int ktA0=ktchanle(A[0]);
	int ktA1=ktchanle(A[1]);
	for (int i=0;i<n-2;i++)
	{
		if (ktchanle(A[i])==ktA0)
			if (ktchanle(A[i+1])==ktA1)
			{
				i++;
				continue;
			}
			else return i+1;
		else return i;
	}
	return -1;
}
int ktchanle(int x)
{
	if (x%2==0)
		return 2;
	else 
		return 1;
}
void xuat(int kq)
{
	printf("%d",kq);
}