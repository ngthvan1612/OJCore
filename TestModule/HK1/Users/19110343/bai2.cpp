#include<stdio.h>
#include<string.h>
#include<math.h>
void Nhap(char s1[],char s2[])
{
	gets(s1);
	gets(s2);
}
long thapphan(char s[])
{
	long kq = 0;
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] > '0' && s[i] < '9')
			kq = kq + (s[i] - '0')*(long)pow(16, len - i - 1);
		else 
			kq = kq + (s[i] - 55)*(long)pow(16, len - i - 1);
	}
	return kq;
}
long tinhtoan(char s1[], char s2[])
{
	long kq = thapphan(s1);
	kq += thapphan(s2);
	return kq;
}
void main()
{
	char s1[10], s2[10];
	Nhap(s1,s2);
	printf("%d", tinhtoan(s1,s2));
}