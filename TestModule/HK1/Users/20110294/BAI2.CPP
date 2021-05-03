#include<stdio.h>
#include<string.h>
#include<math.h>

void nhap(char S[]);
long doiSangThapPhan(char S[]);
void xuat(long kq);

void main()
{
	char a[30], b[30];
	nhap(a);
	nhap(b);
	long kq = doiSangThapPhan(a) + doiSangThapPhan(b);
	xuat(kq);
}

void nhap(char S[])
{
	gets(S);
}

long doiSangThapPhan(char S[])
{
	long kq = 0;
	int len = strlen(S);
	S = strrev(S);
	for (int i = 0; i < len; i++)
		if (S[i] >= '0' && S[i] <= '9')
			kq = kq + (S[i] - '0') * (long)pow(16, i);
		else
			kq = kq + (S[i] - 55) * (long)pow(16, i);
	return kq;
}

void xuat(long kq)
{
	printf("%ld", kq);
}