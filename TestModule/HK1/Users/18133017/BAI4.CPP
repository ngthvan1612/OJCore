#include<stdio.h>


void NhapMang(int A[][100], int n, int m); 
bool ktraSNT(int a);
void TongSNT(int a[][100], int n, int m);

void Main()
{
	int a[100][100];
	int n,m;
	scanf("%d%d",&n,&m);
	NhapMang(a,n,m);
	TongSNT(a,n,m);
	printf("12");

}
void NhapMang(int a[][100], int n, int m) 
{
	for(int i = 0; i<n;i++)
	{
		for(int j = 0 ; j<m;j++)
		{
			scanf("%d", &a[i][j]);
		}

	}
}
bool KtraSNT(int a)
{
	int dem = 0;
	for(int i = 1; i <a;i++)
	{
		if(a%i==0){
			dem ++;
		}

	}
	if(dem ==1)
	{
		return 1;

	}
	else
		return 0;
}
void TongSNT(int a[][100], int n, int m)
{
	int tong =0;
	int dem;
	for(int i = 0; i<n; i++)
	{
		dem=0;
	}
	for(int j =0;j<m;j++)
	{
		if (ktraSNT(a[i][j]) ==1)
		{
			dem++;
		}
	}
	tong = a[i][j]+a[i][j];
	printf("%d",tong);
}