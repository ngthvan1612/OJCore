#include <stdio.h>
void nhap(int A[],int &n);
int XuLy(int A[],int n);
int chanle(int a,int b);
void main()
{
	int A[100];
	int n;
	nhap(A,n);
	int kq = XuLy(A,n);
	printf("%d", kq);
}
void nhap(int A[],int &n)
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
}
int XuLy(int A[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(chanle(A[i],A[i+1])==0)
		{
			return i+1;
			break;
		}
	}
	return -1;
}
int chanle(int a,int b)
{
	if((a%2==0 && b%2 ==1)||(a%2 ==1 && b%2 ==0))
		return 1;
	if((a%2==1 && b%2 ==1)||(a%2 ==0 && b%2 ==0))
		return 0;
	return -1;
}