#include<stdio.h>

void main()
{
	unsigned __int64 a;
	unsigned __int64 b;
	scanf("%x%x", &a, &b);
	unsigned __int64 s = a + b;
	printf("%d", s);
}