#include <stdio.h>
#include <math.h>
#include <string.h>

void xuat(char a[], char b[]);

void main()
{
	char a[10],b[10];
    scanf("%s",&a);
	scanf("%s",&b);
    xuat(a,b);
}

long doisangthapphan(char s[])
{
	long k = 0;
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		if (s[i] >='0' && s[i] <= '9')
			k = k + (s[i] - '0')*(long)pow(16,len-i-1);
		else 
			k = k +(s[i] - 55)*(long)pow(16,len-i-1);
	return k;
}

void xuat(char a[], char b[])
{
	long t = doisangthapphan(a);
	long h = doisangthapphan(b);

	int k = t + h;
	printf("%d",k);
}

