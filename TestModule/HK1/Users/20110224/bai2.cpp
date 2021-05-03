#include <stdio.h>
#include <string.h>

__int64 ToDec(char x[15]) {
	__int64 result = 0;
	int n = strlen(x);
	for (int i = 0; i < n; ++i) {
		if ('0' <= x[i] && x[i] <= '9') {
			result = result * 16 + (x[i] - '0');
		}
		else if ('a' <= x[i] && x[i] <= 'z') {
			result = result * 16 + (x[i] - 97 + 10);
		}
		else {
			result = result * 16 + (x[i] - 65 + 10);
		}
	}
	return result;
}

int main() {
	char a[15], b[15];
	gets(a);
	gets(b);
	__int64 za = ToDec(a);
	__int64 zb = ToDec(b);
	printf("%I64d", za + zb);
	return 0;
}
	