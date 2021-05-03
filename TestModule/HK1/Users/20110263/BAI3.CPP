#include<stdio.h>
#define MAX 100

void nhap(int A[], int &a);
int duyet(int A[], int n);
void xuat(int x);


int main()
{
	int a,A[MAX];
	nhap(A,a);
	int kq = duyet(A,a);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &a)
{
	scanf("%d",&a);
	for(int i = 0; i<a; i++)
	{
		scanf("%d",&A[i]);
	}
}

int duyet(int A[], int n)
{
	int vt = 100;
	int vtm = 1000;
	int dem = 0;
	if(A[0] %2 == 0)
	{
		for(int i =0; i<n; i++)
		{
			if(i%2 == 0)
			{
				if(A[i] % 2 == 0)
					dem +=1;
				else
					vtm = i;

			}
			else
			{
				if(A[i] % 2 == 1)
					dem +=1;
				else
					vtm = i;
			}
			if(vtm < vt)
			{
				vt = vtm;
			}
		}
	}
	else
	{
		for(int i =0; i<n; i++)
		{
			if(i%2 == 0)
			{
				if(A[i] % 2 == 1)
					dem +=1;
				else
					vtm = i;

			}
			else
			{
				if(A[i] % 2 == 0)
					dem +=1;
				else
					vtm = i;
			}
			if(vtm < vt)
			{
				vt = vtm;
			}
		}
	}
	if(dem == n)
		return -1;
	else
		return vt;
}
void xuat(int x)
{
	printf("%d\n",x);
}
