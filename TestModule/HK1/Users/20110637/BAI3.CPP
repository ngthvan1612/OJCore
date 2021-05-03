#include<stdio.h>
 void nhap(int &n,int A[]);
 int kiemTra(int n,int A[]);
 void xuat (int kt);
void main()
{
	int A[100];
	int n;
	nhap (n,A);
	int kt=kiemTra(n,A);
	xuat (kt);
}
void nhap(int &n,int A[])
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
		scanf ("%d ",&A[i]);
}
int kiemTra(int n,int A[])
{
	int c=0;
	int kt;
	for (int i=0;i<n;i++)
	{
		if (A[0]%2==0)
		{
			if(A[2*i]%2==0&&A[2*i+1]==1)
				c++;
			if(A[2*i]%2==1)
				break;
			    return 2*i;
			if (A[2*i+1]%2==0)
				break;
			    return 2*i+1;
		{
			
		if (A[0]%2==1)
		{
			if(A[2*i]%2==1&&A[2*i+1]==0)
				c++;
			if(A[2*i]%2==0)
				break;
			    return 2*i;
			if (A[2*i+1]%2==1)
				break;
			    return 2*i+1;
		{
	}
	if (c==n)
		kt=-1;
		return kt;
}
void xuat(int kt)
{
	printf("%d ",kt );
}
