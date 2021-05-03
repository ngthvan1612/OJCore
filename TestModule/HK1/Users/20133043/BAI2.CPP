#include<stdio.h>
#include<string.h>
#include<math.h>
long int central(char a[], char b[]);

void main()
{
	char a[12], b[12];
	gets(a);
	gets(b);
	long int kq=central(a, b);
	printf("%ld", kq);
}
long int central(char a[], char b[])
{
	long int kq1=0;
	int len1=strlen(a);
	for(int i=0; i<len1; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			kq1 += (a[i] -'0')*(long)pow(16, len1-i-1);
	    else 	
			kq1 += (a[i]-55)*(long)pow(16, len1-i-1);
	}
	long int kq2=0;
	int len2=strlen(b);
	for(int j=0; j<len2; j++)
	{
		if (b[j] >= '0' && b[j] <= '9')
			kq2 += (b[j] -'0')*(long)pow(16, len2-j-1);
	    else 		
			kq2 += (b[j]-55)*(long)pow(16, len2-j-1);
	}
	long int kq=0;
	  kq = kq1 + kq2;
	  return kq;
}

