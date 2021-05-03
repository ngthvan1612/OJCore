#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int convert_toInt(char *hex);
int mu(int a ,int b);
int hexover10(char hex);

void main()
{
	char* A = new char();
	char* B = new char();
	int S = 0;
	gets(A);
	gets(B);
	S = convert_toInt(A) + convert_toInt(B);
	printf("%d", S);
}

int convert_toInt(char *hex)
{
	int n = strlen(hex);
	int real =0;
	char *revhex  = strrev(hex);
	for(int i = 0; i< n;i ++)
	{
		real += hexover10(revhex[i]) * mu(16, i);
	}
	return real;
}

int mu(int a, int b)
{
	int res = 1;
	for (int i = 0; i < b; i++)
	{
		res = res * a;
	}
	return res;
}

int hexover10(char hex)
{
	switch(hex)
	{
	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;
	case 'A': return 10; break;
	case 'B': return 11; break;
	case 'C': return 12; break;
	case 'D': return 13; break;
	case 'E': return 14; break;
	case 'F': return 15; break;
	}
	return -1;
}