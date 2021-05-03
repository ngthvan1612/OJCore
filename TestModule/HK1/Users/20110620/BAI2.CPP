#include <stdio.h>
void nhap (int &a, int &b);
void tinh(int a, int b);
void xuat (int x);
void main ()

{
	int a,b;
	nhap (a,b);
	tinh(a,b);

}
void nhap (int &a, int &b)
{
	scanf ("%x%x", &a,&b);
}
void tinh(int a, int b)
{
	int s = a+b;
	xuat (s);
}
void xuat (int x)
{		
	printf ("%d", x);
	
}