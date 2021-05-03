#include <stdio.h>
#include <math.h>
void input(long &a, long &b);
void output (long a, long b);

int main ()
{
	long a, b;
	input (a,b);
	output (a,b);
	return 0;
}

void input(long &a, long &b)
{
	scanf ("%x %x", &a, &b);
}

void output (long a, long b)
{
	printf ("%u", a+b);
}