#include <stdio.h>
#include <string.h>
#include <math.h>
long htod(char str[]);
int main() {
	char str1[11], str2[11];
	gets(str1);
	gets(str2);
	long d1 = htod(str1);
	long d2 = htod(str2);
	long kq = d1 + d2;
	printf("%li", kq);
	return 0;
}
long htod(char str[]) {
	int n = strlen(str);
	strrev(str);
	long tong = 0;
	for(int i = 0; i < n; i++) {
		if(str[i] >= '0' && str[i] <= '9') {
			tong = tong + (str[i]-'0')*(long)pow(16, i);
		} else if(str[i] >= 'A' && str[i] < 'Z') {
			tong = tong + (str[i] - 55)*(long)pow(16, i);
		}
	}
	return tong;
}