#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int i = 1; i <= 25; ++i) {
		string testName = "test" + to_string(i);
		system(("rmdir /S /Q " + testName + " 2> err").c_str());
		system(("mkdir " + testName).c_str());
		int a = rand() % 100;
		int b = rand() % 100;
		ofstream input(testName + "/" + "MulAB.INP");
		input << a << ' ' << b;
		input.close();
		ofstream output(testName + "/" + "MulAB.OUT");
		output << a * b;
		output.close();
		printf("add test %02d: [a = %d, b = %d]\n", i, a, b);
	}
	return 0;
}
