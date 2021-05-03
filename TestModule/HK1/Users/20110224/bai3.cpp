#include <stdio.h>

int main() {
	int n, a[111];
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; ++i) {
		if ((a[i] + a[i + 1]) % 2 == 0) {
			printf("%d", i + 1);
			return 0;
		}
	}
	printf("-1");
	return 0;
}