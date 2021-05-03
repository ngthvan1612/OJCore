#include <stdio.h>

bool checkPrime(int x) {
	if (x < 2)
		return false;
	for (int i = 2; i <= x - 1; ++i)
		if (x % i == 0)
			return false;
	return true;
}

int main() {
	int m, n, a[111][111];
	int sum[111];
	int i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; ++i) {
		sum[i] = 0;
	}
	for (i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (checkPrime(a[i][j]))
				sum[i] += a[i][j];
		}
	}
	int ans = sum[0];
	for (i = 0; i < m; ++i) {
		//printf("sum[%d] = %d\n", i, sum[i]);
		if (ans > sum[i])
			ans = sum[i];
	}
	printf("%d", ans);
	return 0;
}
