#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void tinhdiem(int mDiem[], int AB[], int AC[], int BC[]);
void tinhtoan(int mDiem[], int AB[], int indexA, int indexB);

void main()
{
	int AB[2],AC[2],BC[2];
	scanf("%d%d%d%d%d%d", &AB[0], &AB[1], &AC[0], &AC[1], &BC[0], &BC[1]);
	int mDiem[3] ={0};
	tinhdiem(mDiem, AB,AC,BC);
	for(int i = 0; i< 3; i++)
		printf("%d ", mDiem[i]);
}

void tinhdiem(int mDiem[], int AB[], int AC[], int BC[])
{
	tinhtoan(mDiem, AB, 0, 1);
	tinhtoan(mDiem, AC, 0, 2);
	tinhtoan(mDiem, BC, 1, 2);
}

void tinhtoan(int mDiem[], int AB[], int indexA, int indexB)
{
	if (AB[0]  == AB[1])
	{
		mDiem[indexA] += 1;
		mDiem[indexB] += 1;
	}
	else if(AB[0] == 3)
	{
		if(AB[1] == 1)
		{
			mDiem[indexB] += 3;
		}
		else 
		{
			mDiem[indexA] += 3;
		}
	}
	else if(AB[0] == 2)
	{
		if(AB[1] == 1)
		{
			mDiem[indexA] += 3;
		}
		else 
		{
			mDiem[indexB] += 3;
		}
	}
	else if(AB[0] == 1)
	{
		if(AB[1] == 2)
		{
			mDiem[indexB] += 3;
		}
		else 
		{
			mDiem[indexA] += 3;
		}
	}
}


