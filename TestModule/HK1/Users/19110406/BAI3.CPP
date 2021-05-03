#include <stdio.h>
void input(int A[],int &n);
int laChan(int a);
int check(int A[],int n);
int main()
{
	int A[100],n,flag;
	input(A,n);
	flag=check(A,n);
	printf("%d",flag);

	return 0;
}
int laChan(int a)
{
	if (a%2==0)
		return 1;
	return 0;
}
void input(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int check(int A[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(laChan(A[i]))
		{
			if(laChan(A[i-1]))
				return i;
		}
		else 
		{
			if(!laChan(A[i-1]))
				return i;
		}
	}
	return -1;
}