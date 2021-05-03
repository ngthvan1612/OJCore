#include<stdio.h>
void  nhap(int &m,int &n,int a[][100])
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j< n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
int nguyento(int h)
{
		if(h==1)
			return 1;
	for(int i=2;i<h;i++)
	{
		if(h%i==0)
		{
			return 0;
		}
		
	}
}
int kiemtra(int m,int n,int a[][100])
{
	
	int s[100];
	int k=0;
	for(int i=0;i<m;i++)
	{
		int tong=0;
		for(int j=0;j< n;j++)
		{
			if(nguyento(a[i][j]!=0))
				tong=tong+a[i][j];
			
		}
		s[k]=tong;
	
		
			k++;

	}
	int min=s[0];
		
	for(int x=0;x<k;x++)
	{
		if(min>s[x])
			min=s[x];
	
	}
	
	return min;

}
void xuat(int kt)
{
	printf("%d",kt);
}
void main()
{
	int m,n;
	int a[100][100];
	nhap(m,n,a);
	int kq=kiemtra(m,n,a);
	xuat(kq);
}