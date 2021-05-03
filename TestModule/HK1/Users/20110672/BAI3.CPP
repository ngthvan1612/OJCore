#include <stdio.h>
int kiemTra(int A[],int n)
{
	int dem=1;
	if(A[0]%2==1)
	for(int i=0;i<n-1;i++)
		if((A[i]%2!=0&&A[i+1]%2==0)||(A[i]%2==0&&A[i+1]%2!=0))
			dem+=1;
		else
			return dem;
	else
	if(A[0]%2==0)
	for(int i=0;i<n-1;i++)
		if((A[i]%2==0&&A[i+1]%2!=0)||(A[i]%2!=0&&A[i+1]%2==0))
			dem+=1;
		else
			return dem;

	if(dem==(n)) return 9999;
}
int chanLe(int A[],int n)
{
	if(kiemTra(A,n)==9999) return -1;
	else
		return kiemTra(A,n);
}
void main()
{
	int n,A[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	int kq=chanLe(A,n);
	printf("%d",kq);
}