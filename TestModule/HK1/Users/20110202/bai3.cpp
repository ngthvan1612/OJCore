#include<stdio.h>;
void nhap(int A[],int &n);
void xuat(int kq);
int kt(int A[],int n);

void main()
{
	int A[100];
	int n;
	nhap(A,n);
	int kq=kt(A,n);
	xuat(kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
    for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int kt(int A[],int n)
{
	int t;
	if (A[0]%2==0)
		t=0;
	else
		t=1;
	int i=1;
	while(i<n)
	{
		if(t ==0)
			if(A[i]%2==0)
				return i;
			else
			{
				t=1;
				i++;
			}
		else
			if(A[i]%2==1)
				return i;
			else
			{
				t=0;
				i++;
			}
	}
	return -1;
}
