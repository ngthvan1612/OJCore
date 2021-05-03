#include<stdio.h>
void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d",&A[i]);
}
int tinh(int A[],int n)
{
	int kq;
	for(int i=0;i<n-1;i=i++)
	{
		if((A[i]%2==0 && A[i+1]%2 ==0) || (A[i]%2 !=0 && A[i+1]%2 !=0))
		{
			printf("%d",i+1);
			return i;
		}
	}
	if(kq!=i)	
		printf("-1");
	return kq;
}
void main()
{
	int A[100],n;
	nhapMang(A,n);
	int kq=tinh(A,n);
}
