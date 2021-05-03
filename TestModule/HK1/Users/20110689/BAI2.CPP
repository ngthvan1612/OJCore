#include<stdio.h>
#include<math.h>
#include<string.h>


double Tinh(char s[]);

void main()
{
	char s1[11];
	char s2[11];
	gets(s1);
	gets(s2);
	double kq1 = Tinh(s1);
	double kq2 = Tinh(s2);
	double kq = kq1 + kq2;
	printf("%.0lf", kq);
}


double Tinh(char s[])
{
	int len = strlen(s);
	strrev(s);
	double t = 0;
	for(int i = 0; i < len;i++)
	{
		if(s[i] >='0' && s[i] <='9')
			t = t + (s[i] - '0')*pow(16,i);
		if(s[i] >='A' && s[i]<='F')
			t = t + (s[i] - 'A' + 10)*pow(16,i);
	}
	return t;
}

