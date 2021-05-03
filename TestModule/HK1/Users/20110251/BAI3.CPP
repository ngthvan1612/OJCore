#include<stdio.h>
void nhapMang(int A[],int n);
int xuliDulieu(int A[],int n);
void main(){
	int A[100] = {0};
	int n = 0;
	scanf("%d",&n);
	nhapMang(A,n);
	int kq = xuliDulieu(A,n);
	printf("%d",kq);
}
void nhapMang(int A[],int n)
{
	for(int i = 0; i < n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int xuliDulieu(int A[],int n)
{
	int chan = 0,
		le = 0;
	if(A[0] %2 == 0)
	{
		for(int i = 0;i < n;i++)
		{
			if(A[i]%2 == 0)
			{
				chan +=1;
			}
			else
			{
				le +=1;
			}
			if (le > chan)
			{
				return i;
				break;
			}
				if((A[i] % 2 == 0 && A[i+1] % 2 == 0) || (A[i]%2 != 0 && A[i+1] %2 != 0))
				{	
					if( i + 1 < n )
						return i+1;
				}
		}
		if(chan == n)
		{
			return 1;
		}
	}
	else
	{
		for(int i = 0;i < n;i++)
		{
			if(A[i]%2 != 0)
			{
				le +=1;
			}
			else
			{
				chan +=1;
			}
			if (chan > le)
			{
				return i;
				break;
			}
				if((A[i] % 2 == 0 && A[i+1] % 2 == 0) || (A[i]%2 != 0 && A[i+1] %2 != 0))
				{	
					if( i + 1 < n )
						return i+1;
				}
		}
		if(le == n)
		{
			return 1;
		}
	}
	return -1;
}