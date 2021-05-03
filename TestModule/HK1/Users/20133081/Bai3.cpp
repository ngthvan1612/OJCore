#include<stdio.h>
#define SIZE 100
void nhapmang(int A[],int &n);
int chanle(int A[],int n);
void xuat(int t);
void main()
{
	int A[SIZE],n;
	nhapmang(A,n);
	int kq=chanle(A,n);
	xuat(kq);
}

void nhapmang(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n-1;i++)
		scanf("%d",&A[i]);
}

int chanle(int A[],int n)
{	
	
	for (int i=0;i<n;i++)
	{
		if (i!=n)
		{
			if (A[i]%2==0)
			{
				if (A[i+1]%2!=0) return -1;
				else 
				{
					i+=1;	
					break;
					return i;
					
				}
			}
			else
			{
				if (A[i+1]%2==0) return -1;
				else 
				{	
					i+=1;
					break;
					return i;
				}
			}
		}
		else 
		{
			break;
			return -1;
		}
	}
}

void xuat(int t)
{
	printf("%d",t);
}