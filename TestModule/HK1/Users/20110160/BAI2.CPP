#include<stdio.h>
#include<string.h>
#include<math.h>
long hexToDec(char a[]);
int main() {
	char A[100], B[100];
	gets(A);
	gets(B);
	long dA = hexToDec(A);
	long dB = hexToDec(B);
	long S = dA + dB;
	printf("%ld", S);
	return 0;
}
long hexToDec(char a[]) {
	long kq = 0;
	int l = strlen(a);
	for (int i = 0; i < l; i++) {
		if (a[i] >= '0' && a[i] <= '9')
			kq = kq + (a[i] - '0')*(long)pow(16, l-i-1);
		else
			kq = kq + (a[i] - 55)*(long)pow(16, l-i-1);
	}
	return kq;
}