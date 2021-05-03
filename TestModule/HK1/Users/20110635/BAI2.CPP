#include <stdio.h>
#include <string.h>
#include <math.h>
int tinh(char c)
{
	switch (c)
	{
	case '1' : {return 1; break;}
	case '2': {return 2; break;}
	case '3': {return 3; break;}
	case '4': {return 4; break;}
	case '5': {return 5; break;}
	case '6': {return 6; break;}
	case '7': {return 7; break;}
	case '8': {return 8; break;}
	case '9': {return 9; break;}
	case 'A': {return 10; break;}
	case 'B': {return 11; break;}
	case 'C': {return 12; break;}
	case 'D': {return 13; break;}
	case 'E': {return 14; break;}
	case 'F': {return 15; break;}
    case '0': {return 0; break;}
			   
	}
}
int main ()
{
	char A[12], B[12];
	scanf("%s",&A);
	fflush(stdin);
	scanf("%s",&B);
	long sumA=0;
	int n=strlen(A);
	for (int i=0; i<strlen(A);i++)
	{
		sumA=sumA+ tinh(A[i])*pow(16,n-1);
		n--;
	}
	
	long sumB=0;
	int m=strlen(B);
	for (int j=0; j<strlen(B);j++)
	{
		sumB=sumB+ tinh(B[j])*pow(16,m-1);
		m--;
	}
	printf("%ld",sumA+sumB);
	return 0;
}