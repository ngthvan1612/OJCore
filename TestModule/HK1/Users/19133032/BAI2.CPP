#include <stdio.h>
#include <math.h>
#include <string.h>
void hexToDec (char S[], long &n);
double ketQua (char S1[], char S[2]);
void main ()
{
	char S1[11];
	char S2[11];
	scanf ("%s", S1);
	scanf ("%s", S2);
	double kq = ketQua (S1, S2);
	printf ("%.0lf", kq);
}
double hexToDec (char S[])
{
	double n = 0;
	int l = strlen (S) -1;
	for (int i = 0; i <= l; i++)
		if (S[i] >= '0' && S[i] <= '9')
			n = n + ((S[i] - '0')*pow(16, l-i));
		else
			n = n + ((S[i] - 'A' + 10)*pow(16, l-i));
	return n;
}
double ketQua (char S1[], char S2[])
{
	double kq = hexToDec(S1) + hexToDec(S2);
	return kq;
}