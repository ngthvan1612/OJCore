#include <stdio.h>
void nhap(int &x);
int keoBuaBao(int a, int b);
void xuat(int a, int b, int c);

int main()
{
	int x, y, z, t, u, v;
	int A, B, C;
	int A1, A2, B1, B2, C1, C2;
	nhap(x);
	nhap(y);
	nhap(z);
	nhap(t);
	nhap(u);
	nhap(v);
	int A1 = keoBuaBao(x, y);
	if (A1==1)
		B1=1;
	else
		B1=3-A;
	int A2 = keoBuaBao(z, t);
	if (A2==1)
		C2=1;
	else
		C2=3-A2;
	int B2 = keoBuaBao(u, v);
	if (B2==1)
		C1=1;
	else
		C1=3-B2;
	A = A1+A2;
	B = B1+B2;
	C = C1+C2;
	xuat(A, B, C)
	return 0;
}

void nhap(int &x)
{
	scanf("%d", &x);
}

void xuat(int a, int b, int c)
{
	printf ("%d %d %d", a, b, c);
}

int keoBuaBao(int a, int b)
{
	if (a==1)
	{
		if(b==2)
			return 0;
		if(b==3)
			return 3;
		else
			return 1;
	}
	if(a==2)
	{
		if(b==1)
			return 3;
		if(b==2);
			return 1;
		else return 0;
	}
	if(a==3)
	{
		if(b==1)
			return 0;
		if(b==2)
			return 3;
		else
			return 1;
	}
}

