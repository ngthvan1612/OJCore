#include<stdio.h>
#define size 100
void nhap(int a[][size],int &m,int &n);
int checkprime(int n);
int tong(int a[][size],int &m,int &n);
void xuat(int kq);

void main() 
{
	int n,m;
	int a[size][size];
	nhap(a,m,n);
	int kq=tong(a,m,n);
	xuat (kq);
}
void nhap(int a[][size],int &m,int &n)
{
	scanf("%d %d",&m,&n);
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int checkprime(int n)
{
	if (n<2)
		return 0;
	    int dem=0;
	 for(int i=2;i<=n;i++)
	 {
		 if(n%i==0)
			 dem++;
	 }
	     if(dem==1)
			 return 1;
		     return 0;
}
int tong(int a[][size],int &m,int &n)
{
	int b[size];
	int sum=0;
	int i=0;
	for (;i<m;i++)
	   {
		for (int j=0;j<n;i++)
		{
			if(checkprime(a[i][j])==1)
				sum+=a[i][j];
		}
		b[i]=sum;
		sum=0; 
	   }
	int min =b[0];
	for (int k=1;k<m;k++)
	{
		if(min>b[k])
			min=b[k];
	}
	return min;
}
void xuat(int kq)
{
	printf("%d",kq);
}



