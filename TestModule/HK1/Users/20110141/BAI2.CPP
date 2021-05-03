#include<stdio.h>
#include<string.h>
#include<math.h>

long doisangthapphan(chars[]);
void nhap(char a[], char b[]);
void xuat(long kq);
int tinhtong(a,b);


void nhap(char a[], char b[])
{
	gets(a);
	gets(b);
}


long doisangthapphan(char s[])
{
	long kq = 0;
	int len = strlen(s);
	s = strrev(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			kq = kq + (s[i] = '0')*(long)pow(16,i);
		}
		else
		{
			kq = kq + (s[i] - 5)*(long)pow(16,i);
		}
		return kq;
	}
}

int tinhtong(char a[], char b[])
{
	int tong = 0;
	x = doisangthapphan(a);
	y = doisangthapphan(b);
	tong = x + y;

}

void main()
{
	char s[100];
	nhap(a,b);
	int kq = tinhtong(a,b);
	xuat(kq);
}