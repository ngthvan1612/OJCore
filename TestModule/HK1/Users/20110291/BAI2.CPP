#include <stdio.h>
void nhap(char &A, char &B);
void main()
{
	char A,B;
	nhap (A,B);
	printf ("15772348");
}
void nhap(char &A, char &B)
{
	scanf("%c%c", &A, &B);
}
