#include <stdio.h>

void nhapMang(int A[],int &n);
int kiemTraChanLe(int A[],int n);
void main()
{
	int n;
	int A[100];
	nhapMang(A,n);
	int kq = kiemTraChanLe(A,n);
	printf("%d",kq);
}

int kiemTraChanLe(int A[],int n)
{
	int kq = -1;
	for(int i = 0; i < n - 1; i ++)
	{
		if(A[i]%2== 0)
		{
			if(A[i+1]%2 == 0)
			{
				kq = i + 1;
				break;
			}
		}
		else
		{
			if(A[i+1]%2!= 0)
			{
				kq = i + 1;
				break;
			}
		}
	}
	return kq;
}

void nhapMang(int A[],int &n)
{
	scanf("%d",&n);
	for(int i = 0; i < n ; i ++)
	{
		scanf("%d",&A[i]);
	}
}