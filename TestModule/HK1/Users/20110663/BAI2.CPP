#include<stdio.h>
#include<string.h>
#include<math.h>
double tong(char s1[]);
void main()
{
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	double t1=tong(s1);
	double t2=tong(s2);
	printf("%.0f", t1);
}
double tong(char s1[])
{
	double t1=0, m=0;
	for(int i=strlen(s1)-1; i>=0; i--)
	{
		int d;
		switch(s1[i])
		{
		case 'A': d=10; break;
		case 'B': d=11; break;
		case 'C': d=12; break;
		case 'D': d=13; break;
		case 'E': d=14; break;
		case 'F': d=15; break;
		default: d=s1[i]-48;
		}
		t1=t1+d*pow(16,m);
		m++;
	}
	return t1;
}