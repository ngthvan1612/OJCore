#include<stdio.h>
void timMin(int b[],int m);
void nhap(int a[][100],int &m,int &n);
void tinhKQ(int a[][100],int m,int n, int b[]);
bool kiemtra(int n);
int main()
{
	int a[100][100];
	int b[100];
   	int m,n;
   	nhap(a,m,n);
	tinhKQ(a,m,n,b);
	timMin(b,m);
}
void nhap(int a[][100],int &m,int &n)
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
bool kiemtra(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	return true;
	else
	return false;
}
void tinhKQ(int a[][100],int m,int n, int b[])
{

	for(int i=0;i<m;i++)
	{
			int tong=0;
		for(int j=0;j<n;j++){
		if(kiemtra(a[i][j]))
		{
			tong=tong+a[i][j];
		}
	}
		b[i]=tong;
}

}
void timMin(int b[],int m)
{
	int min=b[0];
	for(int i=0;i<m;i++)
	{
		if(b[i]<min)
		{
			min=b[i];
		}
	}
	printf("%d",min);
}
