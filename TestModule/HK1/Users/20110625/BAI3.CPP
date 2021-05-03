#include <stdio.h>
#define SIZE 110
int main() {
	int a[SIZE] , n ,i;
	scanf("%d",&n);
	for (i = 0;i < n;++i)
			scanf("%d",&a[i]);
	int cnt = 0,check;
	for (i = 0;i <= n - 3;++i) {
		if ((a[i] % 2 == 0 && a[i + 1] % 2 != 0 && a[i + 2] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 == 0 && a[i + 2] % 2 != 0)) {
			cnt++;
			
		}
	}
	if (cnt == n - 2 )
		printf("-1");
	else
		for (i = 0;i < n - 1;++i) {
			if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0)) {
				check = i + 1;
				printf("%d",check);
				return 0;
			}
		}
	return 0;
}
