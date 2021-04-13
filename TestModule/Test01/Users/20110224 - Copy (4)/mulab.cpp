#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == 81) {
		char* addr = (char*)0x0000;
		for (int i = 0; i < 10; ++i) {
			addr[i] = 0x002;
		}
	}
	else if (a == 71) {
		while (true) { }
	}
	else if (a == 73) {
		typedef long long ll;
		ll* w = new ll[1024 * 1024 * 100];
		for (int i = 0, j = 0; i < 1000; ++i) {
			int k = 1024 * i ^ j;
			w[k] = rand();
		}
	}
	cout << a * b;
	return 0;
}
