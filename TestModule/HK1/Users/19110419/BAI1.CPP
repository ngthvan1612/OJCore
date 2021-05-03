#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void xuLy (int A[], int n, int B[], int nB);
int thang (int a, int b);
void nhap (int A[], int n);
void xuat (int B[], int nB);

int main ()
{
	int A[6], n=6;
	nhap (A, n);
	int B[3]={0}, nB=3;
	xuLy (A, n, B, nB);
	xuat (B, nB);
	return 0;
}

void xuLy (int A[], int n, int B[], int nB)
{
	//B[] = {0};
	if (thang(A[0], A[1])==1)		//thang
		B[0]+=3;
	else if (thang(A[0], A[1])==0)	//hoa
	{
		B[0]++;
		B[1]++;
	}
	else
		B[1]+=3;

	if (thang(A[2], A[3])==1)		//thang
		B[0]+=3;
	else if (thang(A[2], A[3])==0)	//hoa
	{
		B[0]++;
		B[2]++;
	}
	else
		B[2]+=3;
//////
	if (thang(A[4], A[5])==1)		//thang
		B[1]+=3;
	else if (thang(A[4], A[5])==0)	//hoa
	{
		B[1]++;
		B[2]++;
	}
	else
		B[2]+=3;
}

void xuat (int B[], int nB)
{
	for (int i=0; i<nB; i++)
		cout << B[i] << ' ';
}

int thang (int a, int b)
{
	if (a==1 && b==3|| a==3 && b==2|| a==2 && b==1)
		return 1;		//thang
	else if (a==b)
		return 0;		//hoa
	else
		return -1;
}

void nhap (int A[], int n)
{
	for (int i=0; i<n; i++)
		cin >> A[i];
}