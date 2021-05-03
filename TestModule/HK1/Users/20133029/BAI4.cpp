#include<iostream>
#define full 100
using namespace std;
void nhap(int A[][full],int &hang,int &cot);
void tinhtoan(int A[][full],int tong[],int hang, int cot);
void lonnhat(int tong[]);
int kiemtrasonguyento(int x);

void main()
{
	int A[full][full];
	int tong[full];
	for (int i=0;i<full;i++)
		tong[i]=-99;
	int hang,cot;
	nhap(A,hang,cot);
	tinhtoan(A,tong,hang,cot);
	lonnhat(tong);
}
void nhap(int A[][full],int &hang,int &cot)
{
	cin>>hang>>cot;
	for (int i=0;i<hang;i++)
	{
		for (int j=0;j<cot;j++)
		{
			cin>>A[i][j];
		}
	}
}
int kiemtrasonguyento(int x)
{
	for (int i=2;i<x;i++)
	{
		if (x%i==0)
			return 0;
	}
	return 1;
}
void tinhtoan(int A[][full],int tong[],int hang, int cot)
{
	int sotong=0,itong=0;
	for (int i=0;i<hang;i++)
	{
		for (int j=0;j<cot;j++)
		{
			if (kiemtrasonguyento(A[i][j])==1)
			sotong=A[i][j]+sotong;
		}
		tong[itong]=sotong;
		itong++;
		sotong=0;
	}
}
void lonnhat(int tong[])
{
	int solonnhat=99999999;
	for (int i=0;tong[i]!=-99;i++)
	{
		if (tong[i]<solonnhat)
		{
			solonnhat=tong[i];
		}
	}
	cout<<solonnhat;
}
