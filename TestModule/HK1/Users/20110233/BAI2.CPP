#include <stdio.h> 
#include <string.h>
#include <math.h>

int hextodec(char A[]) {
	int t=strlen(A);
	long kq=0;
	for (int i=0; i<t;i++) {
		if (A[i]>='0' && A[i]<='9') {
			kq=kq+(A[i]-'0')*(long)pow(16,t-i-1);
		}
		else 
			kq=kq+(A[i]-'A'+10)*(long)pow(16,t-i-1);
	}
	return kq;
}

int main() {
	char A[100];
	char B[100];
	gets(A);
	gets(B);
	long a=hextodec(A);
	long b=hextodec(B);
	long kq=a+b;
	printf("%ld", kq);
	return 1;
}