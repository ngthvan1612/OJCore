#include <stdio.h>

#define Max 120

int LaNT(int a);
int xuly(int a[][Max], int dong, int cot);
void nhapmang(int a[][Max], int &dong, int &cot);
void main()
{
	int a[Max][Max], dong,cot;
	nhapmang(a,dong,cot);
	int kq = xuly(a,dong,cot);
	printf("%d",kq);

}
void nhapmang(int a[][Max], int &dong, int &cot)
{
	scanf("%d", &dong);
	scanf("%d", &cot);
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
int LaNT(int a)
{
	for(int i = 2; i <= a/2; i++)
	{
		if(a % i == 0)
			return 0;
	}
	return 1;
}
int xuly(int a[][Max], int dong, int cot)
{
	int Min = 10000;
	for(int i = 0; i < dong; i++)
	{
		int tong = 0;
		for(int j = 0; j < cot; j++)
		{
			if(LaNT(a[i][j]) == 1)
			{
				tong += a[i][j];
			}
		}
		if(tong < Min)
			Min = tong;
	}
	return Min;
}