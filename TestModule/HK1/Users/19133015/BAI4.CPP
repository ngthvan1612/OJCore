#include<stdio.h>
#include<math.h>
void nhap(int a[][102], int &m,int &n);
int tong(int a[][102],int m,int n);
void xuat(int kq);
void main()
{
	int m,n,a[102][102];
	nhap(a,m,n);
	int kq=tong(a,m,n);
	xuat(kq);
}
void nhap(int a[][102], int &m,int &n)
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int tong(int a[][102],int m,int n)
{

	int min=1000;
	for(int i=0;i<m;i++)
	{
		int t=0;
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==2)
			{
				t=t+2;
			}
				if(a[i][j]==3)
			{
				t=t+3;
			}
			for(int c = 2; c <= sqrt(a[i][j]); c++)
			{
				 if(a[i][j] % c != 0)
				 {
					t=t+a[i][j];
				 }
			
			}
			
		}
		if(t<min)
		{
			min=t;
		}
	}
	return min;
	
}
void xuat(int kq)
{
	printf("%d",kq);
}

