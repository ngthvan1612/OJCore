#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
	char* mem = (char*)0xb8000;
	for (int i = 0; i < 500; ++i)
		mem[i] = 0x0E;
	return 0;
}

