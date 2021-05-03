#include<stdio.h>
#include<math.h>


void nhapMang(int a[][200], int m, int n)
{
	for (int i=0;i<m;i++)
	{
		for (int j =0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int ktSNT(int x)
{
	if (x<2)
		return 0;
	for (int i=2;i<=x/2;i++)
		if (x%i==0)
			return 0;
	return 1;
}

int xuat(int a[][200],int m,int n)
{
	int tong;
	int b[200];
	int nB=0;
	for (int i=0;i<m;i++)
	{
		tong = 0;
		for (int j =0;j<n;j++)
		{
			if (ktSNT(a[i][j])==1)
			{
				tong = tong+a[i][j];
			}
		}
		b[nB++]=tong;
	}
	int min=b[0];
	for (int q=1;q<nB;q++)
	{
		if (b[q]<min)
			min=b[q];
	}
	return min;
}	
void main()
{
	int a[200][200];
	int m,n;
	scanf("%d %d",&m,&n);
	nhapMang(a,m,n);
	printf("%d",xuat(a,m,n));
}
