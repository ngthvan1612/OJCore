#include <iostream>

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
	cout << a * b;
	return 0;
}
