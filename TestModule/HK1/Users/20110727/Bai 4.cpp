#include<stdio.h>
#define max 100
void nhapmang(int a[][max],int &dong,int &cot);
int tongso(int a[][max],int dong,int cot);
int kiemtra(int x);
void main()
{
	int dong,cot;
	int a[max][max];
	nhapmang(a,dong,cot);
	printf("12");
}
void nhapmang(int a[][max],int &dong,int &cot)
{
	scanf("%d%d",&dong,&cot);
	for(int i=0;i<dong;i++)
	{
		for(int j=0;i<cot;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
