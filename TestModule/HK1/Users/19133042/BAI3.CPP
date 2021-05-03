#include <stdio.h>
#define MAX 100
void nhapMang(int A[],int &n);
void xuat(int x);
int kiemTra(int A[],int n);
void main()
{
	int A[MAX],n;
	nhapMang(A,n);
	int kq = kiemTra(A,n);
	xuat(kq);
}

int kiemTra(int A[],int n)
{
	
	for(int i = 0;i < n;i+=2)
		if((A[i] % 2 != 0 && A[i+1] % 2 == 1) || (A[i] % 2 != 1 && A[i+1] % 2 == 0))
			return i;
	for(int j = 1;j < n;j+=2)
		if((A[j] % 2 != 1 && A[j-1] %2 == 0) || (A[j] % 2 != 0 && A[j-1] %2 == 1))
			return j;
	
	return -1;

}
void xuat(int x)
{
	printf("%d",x);
}
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&A[i]);
	}
}