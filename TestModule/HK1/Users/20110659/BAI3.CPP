#include<stdio.h>
int odd_even(int a[], int n);
void input(int a[], int &n);
void output(int x);

void main()
{
	int a[100],n;
	input(a,n);
	int oe=odd_even(a,n);
	output(oe);
}

int odd_even(int a[], int n)
{
	for (int i=0;i<n-1;i++)
	{
		if (a[i]%2==a[i+1]%2)
		{
			return i+1;
		}
	}
	return -1;
}

void input(int a[], int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void output(int x)
{
	printf("%d",x);
}