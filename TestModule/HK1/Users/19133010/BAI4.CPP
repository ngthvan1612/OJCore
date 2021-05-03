#include<stdio.h>
#define MAX 100

void nhap(int a[][MAX], int m, int n);

int soNT(int a);
int main()
{
	int a[MAX][MAX];
	int m,n;
	scanf("%d%d",&m,&n);
	nhap(a,m,n);

	int s=0;
	int b[100];
	int k=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(soNT(a[i][j])==1)
				s+=a[i][j];
		}
		b[k++]=s;
		s=0;
	}

	int min=b[0];
	for(int z=0;z<k;z++)
	{
		if(b[z]<min)
			min=b[z];
	}
	printf("%d",min);
	return 0;
}

void nhap(int a[][MAX], int m, int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}


int soNT(int a)
{
	int d=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
			d++;
	}
	if(d==2)
		return 1;
	return 0;
}
