#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int i = 1; i <= 20; ++i) {
		string testName = "test" + to_string(i);
		system(("rmdir /S /Q " + testName + " 2> err").c_str());
		system(("mkdir " + testName).c_str());
		int a = rand();
		int b = rand();
		ofstream input(testName + "/" + "SumAB.INP");
		input << a << ' ' << b;
		input.close();
		ofstream output(testName + "/" + "SumAB.OUT");
		output << a + b;
		output.close();
		printf("add test %02d: [a = %d, b = %d]\n", i, a, b);
	}
	return 0;
}
