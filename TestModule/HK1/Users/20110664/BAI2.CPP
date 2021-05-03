#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap(char st[]);
double change16to10(char st[]);
int change(char ch);
void main()
{
	char st1[15],st2[15];
	nhap(st1); nhap(st2);
	double s= change16to10(st1)+change16to10(st2);
	printf("%.0f",s);
}

void nhap(char st[])
{
	gets(st);
}

double change16to10(char st[])
{
	double s=0;
	int n=strlen(st);
	for (int i=0;i<n;i++)
	{
		s=s+pow(16,n-i-1)*change(st[i]);
	}

return s;	
}

int change(char ch)
{
	switch (ch)
	{
	case 'A': return 10;
	case 'B': return 11;
	case 'C': return 12;
	case 'D': return 13;
	case 'E': return 14;
	case 'F': return 15; 
	default: return ch-48;
	}
}
