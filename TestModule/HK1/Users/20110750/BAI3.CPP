#include<stdio.h>
void nhap(int A[],int &n);
int ktra(int a);
int tinh(int A[],int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=tinh(A,n);
	printf("%d", kq);
}

void nhap(int A[],int &n)
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
		scanf("%d", &A[i]);
}

int ktra(int a)
{
	if (a%2==0) return 1;
	return 0;
}

int tinh(int A[],int n)
{
	int i=0; int vt;
	if (ktra(A[0])==0)
	{
		while (i<n)
		{
		if (ktra(A[i]) == 0)  
		{
			if (ktra(A[i+1]) == 1) i=i+2;
			else 
			{	vt=i+1; i=n+5; } 
		}
		else {	vt=i; i=n+5; } 
		
		}
	}
	else 
	{
		while (i<n)
		{
		if (ktra(A[i]) == 1)  
		{
			if (ktra(A[i+1]) == 0) i=i+2;
			else 
			{	vt=i+1;
				i=n+5; }
		}
		else {	vt=i; i=n+5; }
		}
	}
	if (i == n+5) return vt; else return -1;
}