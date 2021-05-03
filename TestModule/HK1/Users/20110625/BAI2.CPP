#include <stdio.h>
#include <string.h>
#define SIZE 15
double hexdec(char str[],int n);
int main() {
	char a[SIZE], b[SIZE];
	gets(a);
	gets(b);
	int n = strlen(a);
	double sum1 = hexdec(a,n);
	double sum2 = hexdec(b,n);
	double sum = sum1 + sum2;
	printf("%.0lf",sum);
	return 0;
}
double hexdec(char str[],int n) {
	int value;
	double sum = 0.0;
	for (int i = 0;i < n;++i) {
		if ('0' <= str[i] && str[i] <= '9')
			value = str[i] - 48;
		else
			value = str[i] - 65 + 10;
		sum = sum * 16 + value;
	}
	return sum;
}

