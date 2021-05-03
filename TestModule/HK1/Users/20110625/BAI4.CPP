#include <stdio.h>
#define ROW 110
#define COL 110
int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}
bool check(int x) {
	if (x < 2)
		return false;
	for (int i = 2;i * i <= x;++i)
		if (x % i == 0)
			return false;
		return true;
}
int main() {
	int a[ROW][COL],m,n,i,j;
	scanf("%d%d",&m,&n);
	for (i = 0;i < m;++i) {
		for (j = 0;j < n;++j) {
			scanf("%d",&a[i][j]);
		}
	}
	bool first = true;
	int summin;
	for (i = 0;i < m;++i) {
		int sum = 0;
		for (j = 0;j < n;++j) {
			if (check(a[i][j]))
				sum = sum + a[i][j];
		}
		if (first) {
			first = false;
			summin = sum;
		}
		else
			summin = min(summin,sum);
	}
	printf("%d",summin);
	return 0;
}
