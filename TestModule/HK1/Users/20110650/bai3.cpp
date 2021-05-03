#include<stdio.h>
#include<conio.h>
void nhap(int &n,int A[]);
void xuly(int A[], int n,int vitri, int vitri1);
void xuat(int vitri, int vitri1);
void main()
{
	int A[100];
	int n;
	int vitri= -1;
	int vitri1 =-1;
	nhap(n,A);
	xuly(A,n,vitri,vitri1);
	xuat(vitri,vitri1);
}
void nhap(int &n,int A[])
{
	scanf("%d", &n);
	for(int i = 0; i <n; i++)
		scanf("%d", &A[i]);
}
void xuly(int A[], int n,int vitri, int vitri1)
{
	int i;
	for( i = 0; i < n ;)
	{
		if(A[i] % 2 != 0 && A[i+1] % 2 != 0)
		{
			vitri = i+1;
			break;
		}
		else 
			i= i +2;
	}
	for( i = 1; i < n ;)
	{
		if(A[i] % 2 == 0 && A[i+1] % 2 == 0)
		{
			vitri1 = i+1;
			break;
		}
		else 
			i= i +2;
	}
}
void xuat(int vitri, int vitri1)
{
printf("-1");
}

