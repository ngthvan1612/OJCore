#include <stdio.h>
#include <string.h>
#include <math.h>

void nhap(char A[], char B[]);
double xuliA(char A[]);
double xuliB(char A[]);

void main()
{
	char A[100], B[100];
	nhap(A, B);
	xuliA(A);
	xuliB(B);
	double tong = xuliA(A) + xuliB(B);
	xuat(tong);
}

void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}

double xuliA(char A[])
{
	double t = 0;
	int dem = strlen(A);
	for (int i = 0; i < dem - 1; i++)
	{
		if (A[dem - i] = '0')
			t += 0;
		else if (A[dem - i] = '1')
			t += 1;
		else if (A[dem - i] = '2')
			t += 2  *  pow(10,i);
		else if (A[dem - i] = '3')
			t += 3  *  pow(10,i);
		else if (A[dem - i] = '4')
			t += 4  *  pow(10,i);
		else if (A[dem - i] = '5')
			t += 5  *  pow(10,i);
		else if (A[dem - i] = '6')
			t += 6  *  pow(10,i);
		else if (A[dem - i] = '7')
			t += 7  *  pow(10,i);
		else if (A[dem - i] = '8')
			t += 8  *  pow(10,i);
		else if (A[dem - i] = '9')
			t += 9  *  pow(10,i);
		else if (A[dem - i] = 'A')
			t += 10  *  pow(10,i);
		else if (A[dem - i] = 'B')
			t += 11  *  pow(10,i);
		else if (A[dem - i] = 'C')
			t += 12  *  pow(10,i);
		else if (A[dem - i] = 'D')
			t += 13  *  pow(10,i);
		else if (A[dem - i] = 'E')
			t += 14  *  pow(10,i);
		else if (A[dem - i] = 'F')
			t += 15  *  pow(10,i);
	}
	return t;
} 

double xuliB(char A[])
{
	double t = 0;
	int dem = strlen(A);
	for (int i = 0; i < dem - 1; i++)
	{
		if (A[dem - i] = '0')
			t += 0;
		else if (A[dem - i] = '1')
			t += 1;
		else if (A[dem - i] = '2')
			t += 2  *  pow(10,i);
		else if (A[dem - i] = '3')
			t += 3  *  pow(10,i);
		else if (A[dem - i] = '4')
			t += 4  *  pow(10,i);
		else if (A[dem - i] = '5')
			t += 5  *  pow(10,i);
		else if (A[dem - i] = '6')
			t += 6  *  pow(10,i);
		else if (A[dem - i] = '7')
			t += 7  *  pow(10,i);
		else if (A[dem - i] = '8')
			t += 8  *  pow(10,i);
		else if (A[dem - i] = '9')
			t += 9  *  pow(10,i);
		else if (A[dem - i] = 'A')
			t += 10  *  pow(10,i);
		else if (A[dem - i] = 'B')
			t += 11  *  pow(10,i);
		else if (A[dem - i] = 'C')
			t += 12  *  pow(10,i);
		else if (A[dem - i] = 'D')
			t += 13  *  pow(10,i);
		else if (A[dem - i] = 'E')
			t += 14  *  pow(10,i);
		else if (A[dem - i] = 'F')
			t += 15  *  pow(10,i);
	}
	return t;
} 

void xuat(double kq)
{
	printf("%d", kq)
}