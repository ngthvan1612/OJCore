#include<iostream>
using namespace std;

int main() {

	int m, n, a[100][100];
	int tong = 0;
	int kq = 0;
	int min = 0;

	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; i <= n; j++) {
			cin >> a[i][j];
		}
		
	}
	for (int i = 1; i <= m; i++) {
		kq = 0;
		for (int j = 1; j <= n; j++) {
			if (a[i][j] % 1 == 0 && a[i][j] % a[i][j] == 0) {
				kq = kq + a[i][j];
				if (min >= kq) {
					min = kq;
					

				}
			}
		
			
		}
	}
	cout << min;
	return 0;
}
