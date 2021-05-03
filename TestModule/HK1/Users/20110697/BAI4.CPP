#include<stdio.h>
#include<math.h>
void nhap(int a[][100], int &m, int &n);
void xuat(int x);
int tinh(int a[][100],int m, int n);

void main()
{
	int a[100][100];
	int m, n;
	nhap(a,m,n);
	int kq=tinh(a,n,n);
	xuat(kq);
}

void nhap(int a[][100], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	}
}

void xuat(int x)
{
	printf("%d", x);
}


int snt(int a)
{
		int dem=0;
		for(int i=2;i<sqrt(a);i++)
		{
			if(a%i==0)
				dem++;
		}
		if(dem==2)
			return 1;
}

int tinh(int a[][100],int m, int n)
{
	int min=0;
	for(int j=0;j<n;j++)		
		if(snt(a[0][j])==1)
			min+=a[0][j];
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j<n;j++)
		{
			if(snt(a[i][j])==1)
				tong+=a[i][j];
		}
		if(tong<min)
			min=tong;
	}
	return min;
}

