#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
unsigned long doi16to10 (char A[]);
void main (){
	char A[11],B[11];
	gets (A);
	gets (B);
	unsigned long a=doi16to10(A);
	unsigned long b=doi16to10(B);
	unsigned long t=a+b;
	printf ("%ld",t);
}
unsigned long doi16to10 (char A[]) {
	int n=strlen (A);
	strrev (A);
	unsigned long kq=0;
	for (int i=0;i<n;i++)
		if (A[i]>='0' && A[i]<='9')
			kq=kq+(A[i]-'0')*pow(16,i);
		else
			kq=kq+(A[i]-'A'+10)*pow(16,i);
	return kq;
}
