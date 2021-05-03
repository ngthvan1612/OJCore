#include<stdio.h>
#include<stdlib.h>


void NhapChuoi(int &s)
{
	scanf("%x",&s);
}

void main()
{
	int s1;
	int s2;
	NhapChuoi(s1);
	NhapChuoi(s2);
	int c = s1 + s2;
	printf("%d",c);
}