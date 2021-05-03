#include<stdio.h>
#include<stdlib.h>
void main()
{   char s1[1000];
    char s2[1000];
	fflush(stdin);
	const char *s=gets(s1);
	const char *k=gets(s2);
	char *p1;
	char *p2;
    unsigned long l=strtoul(s,&p1,16);
    unsigned long l2=strtoul(k,&p2,16);
	printf("%lu",l+l2);
}