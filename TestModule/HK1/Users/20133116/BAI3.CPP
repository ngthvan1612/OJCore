#include<stdio.h>
void nhap(int A[], int &n);
void xuat(int kq);
int xuLy(int A[], int n);
void main()
{
	int A[100], n;
	nhap(A,n);
	int kq=xuLy(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void xuat(int kq)
{
	if(kq)
		printf("-1");

}
int xuLy(int A[], int n)
{
	int flag=0;
	for(int i=0; i<n-1; i++)
		if( (A[i]%2==0 && A[i+1]%2!=0) || (A[i]%2!=0 && A[i+1]%2==0) )
			flag=1;
		else
		{
			printf("%d", i+1);
			break;
		}
	if(flag==1)
		return 1;
}
