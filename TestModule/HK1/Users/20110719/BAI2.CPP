#include <stdio.h>
#include <string.h>
int tong( char S1[], char S2[]);
void main ()
{
	char S1[10],S2[10];
	gets(S1);
	gets(S2);
	int kq=tong(S1,S2);
	printf("%d",kq);
}
int tong( char S1[], char S2[])
{
	int tong=0;
	for( int i=0;i<10;i++)
		tong=S1[i]+S2[i];
	return tong;
}