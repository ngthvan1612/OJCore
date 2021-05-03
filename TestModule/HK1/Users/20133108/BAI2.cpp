#include<stdio.h>
#include<string.h>
#include<math.h>

void nhap(char s[]);
unsigned long long hex(char s[]);

int main()
{
	char a[11], b[11];
	unsigned long long S;
	nhap(a);
	nhap(b);
	unsigned long long kq1 = hex(a);
	unsigned long long kq2 = hex(b);
	S = kq1 + kq2;
	printf("%llu", S);
	
	return 0;
}
void nhap(char s[])
{
	gets(s);
}
unsigned long long hex(char s[])
{
	strrev(s);
	unsigned long long kq = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
			kq = kq + (s[i] - 48) * (long)pow(16, i);
		else
			kq = kq + (s[i] - 55) * (long)pow(16, i);
	}
	return kq;
}


