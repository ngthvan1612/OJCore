#include<sido.h>
void nhapMang(int A[],int n)
{
	scanf("%d",&n);
	for(int i=0;i < n;i++)
		   scanf("%d",&A[i]);
}
void xuat(int x)
{
	printf("%d",x);
}
int kiemTra(int A[], int n)
{
	for(int i=1;i<n;i++)
	{
		if((A[i]%2==0&&A[i++]%2!=0)||(A[i]%2!=0&&A[i++]%2==0)
		{
			return -1;
		}
		return 2;
	}
}
void main()
{
	int [1000],n;
	nhapMang(A,n);
	int kq = kiemTra(A,n);
	xuat (kq);
}