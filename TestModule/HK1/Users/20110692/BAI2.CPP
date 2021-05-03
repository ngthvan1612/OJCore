#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 200

int luythua(int a, int n);


void main()
{
	char csA[MAX], csB[MAX];
	gets(csA);
	gets(csB);

	int inumA=0, inumB=0;

	int kA=0, kB=0;

	int i;

	for (i=strlen(csA)-1; i>=0; i--)
	{
		if (csA[i]>='A' && csA[i]<='Z')
			inumA+= (csA[i]-55) * luythua(16,kA++);
		if (csA[i]>='0' && csA[i]<='9')
			inumA+= (csA[i]-48) * luythua(16,kA++);
	}
	

	for (i=strlen(csB)-1; i>=0; i--)
	{
		if (csB[i]>='A' && csB[i]<='Z')
			inumB+= (csB[i]-55) * luythua(16,kB++);
		if (csB[i]>='0' && csB[i]<='9')
			inumB+= (csB[i]-48) * luythua(16,kB++);
	}


	int S=inumA + inumB;

	printf("%d",S);
}


int luythua(int a, int n)
{
	int s=1;
	for (int i=1; i<=n; i++)
		s*=a;
	return s;
}