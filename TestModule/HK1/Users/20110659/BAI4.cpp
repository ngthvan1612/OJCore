#include<stdio.h>
int isPrime(int x);
int sum_Prime(int a[][100], int m, int n);
void input(int a[][100], int &m, int &n);
void output(int x);

void main()
{
	int a[100][100],m,n;
	input(a,m,n);
	int min=sum_Prime(a,m,n);
	output(min);
}

int isPrime(int x)
{
	int count=0;
	for (int i=1;i<=x/2;i++)
	{
		if (x%i==0)
			count++;
	}
	if (count==1)
		return 1;
	return 0;
}

int sum_Prime(int a[][100], int m, int n)
{
	int sum=0;
	int min=n*100;
	for (int i=0;i<m;i++)
	{
		sum=0;
		for (int j=0;j<n;j++)
			if (isPrime(a[i][j]))
				sum+=a[i][j];
		if (sum<min)
			min=sum;
	}
	return min;
}

void input(int a[][100], int &m, int &n)
{
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}

void output(int x)
{
	printf("%d",x);
}