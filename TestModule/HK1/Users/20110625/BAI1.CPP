#include <stdio.h>
int main() {
	int a[6],i;
	for (i = 0;i < 6;++i)
		scanf("%d",&a[i]);
	int scoreA = 0, scoreB = 0, scoreC = 0;
	if ((a[0] == 1 && a[1] == 3) || (a[0] > a[1]))
		scoreA += 3;
	else if ((a[0] == 3 && a[1] == 1) || (a[0] < a[1]))
		scoreB += 3;
	else {
		scoreA += 1;
		scoreB += 1;
	}
	if ((a[2] == 1 && a[3] == 3) || (a[2] > a[3]))
		scoreA += 3;
	else if ((a[2] == 3 && a[3] == 1) || (a[2] < a[3]))
		scoreC += 3;
	else {
		scoreA += 1;
		scoreC += 1;
	}
	if ((a[4] == 1 && a[5] == 3) || (a[4] > a[5]))
		scoreB += 3;
	else if ((a[4] == 3 && a[5] == 1) || (a[4] < a[5]))
		scoreC += 3;
	else {
		scoreB += 1;
		scoreC += 1;
	}
	printf("%d %d %d",scoreA,scoreB,scoreC);
	return 0;
}