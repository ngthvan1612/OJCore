#include<stdio.h>
#define S 50
int NT(int x);
void nhap(int &m,int &n,int a[][S]);
int tong(int m,int n,int a[][S],int b[S]);
int timmin(int n,int a[]);
void xuat(int kq);
void nhap(int &m,int &n,int a[][S])
{
	scanf("%d%d",&m,&n);
	for(int i = 0; i< m; i++)
		for(int j=0; j<n ;j++)
			scanf("%d",&a[i][j]);
}

int main()
{
	int m,n,a[S][S];
	nhap(m,n,a);
	int b[S];
	tong(m,n,a,b);
	int kq = timmin(n,b);
	xuat(kq);
}

int NT(int x)
{
	int dem =0;
	for (int i= 1;i <=x;i++)
		if (x % i == 0)
			dem++;
	if(dem == 2)
		return 1;
	else
		return 0;
}

int tong(int m,int n,int a[][S],int b[S])
{
	int s = 0;
	for(int i= 0;i< n;i++)
	{
		int s = 0;
		for(int j = 0;j <m;j++)
			if(NT(a[i][j] == 1))
				s += a[i][j];
		b[i] = s;
	}
}

int timmin(int n,int a[])
{
	int min = a[0];
	for(int i = 0; i< n;i++)
		if(a[i] < min)
			min = a[i];
}

void xuat(int kq)
{
	printf("%d",kq);
}
