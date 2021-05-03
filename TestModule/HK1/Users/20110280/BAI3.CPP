#include <stdio.h>
int chanle (int x);
void nhap (int A[] ,int &n);
int kiemtra ( int A[], int n);
void xuat (int kt, int A[], int n);
void main ()
{
	int A[100], n;
	nhap (A,n);
	int kt=kiemtra (A,n);
	xuat (kt,A,n);
}
void nhap (int A[] ,int &n)
{
	scanf ("%d",&n);
	for (int i =0; i  <n ;i++)
		scanf ("%d",&A[i]);
}
int chanle (int x)
{
	int t;
	for (int i =0;i<=x;i++)
	{
		if (x%2 ==0)
			t=1;
		else
			t=-1;
	}
	return t;
}
int kiemtra ( int A[], int n)
{
	int kt=0;
		for (int i =0; i  <n-1 ;i++)
		{
		for (int j = i+1;j<n-1;j++)
			if (chanle(A[i])==1 && chanle (A[j])==-1)
			{
				if (chanle(A[j+1]== 1)
					kt =1;
				else
					kt =0;
			}
			if (kt == 1)
				printf ("%d",-1);
			else
				printf ("%d",)

}
void xuat (int kt, int A[], int n)
{
for (int i =0; i  <n ;i++)
	printf ("%d",kt);
}
				

				


	
