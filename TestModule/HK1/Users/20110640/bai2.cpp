#include<stdio.h>
void nhapmang(int A[],int &n);
int lachan(int n);
int lale(int n);
int chanle(int A[],int n);
void xuat(int kq);

void main()
{
	int A[1000],n;
	nhapmang(A,n);
	int kq=chanle(A,n);
	xuat(kq);
}
void nhapmang(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int lachan(int n)
{
	if (n%2==0)
		return 1;
	else 
		return 0;
}
int lale(int n)
{
	if (n%2!=0)
		return 1;
	else
		return 0;
}
int chanle(int A[],int n)
{
	int k;
	for (int i=0;i<n;i++)
	{
		if (lachan((A[i]==1)&&lale(A[i+1])==1)||(lale(A[i])==1&&lachan(A[i+1])==1))
			k=-1;
		else 
			k=A[0];
	}
	return k;
}
void xuat(int kq)
{
	printf("%d",kq);
}