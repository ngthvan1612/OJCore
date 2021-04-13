#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int i = 1; i <= 15; ++i) {
		string testName = "test" + to_string(i);
		system(("rmdir /S /Q " + testName + " 2> err").c_str());
		system(("mkdir " + testName).c_str());
		int h = rand() % 24;
		int m = rand() % 60;
		int s = rand() % 60;
		ofstream input(testName + "/" + "CountTime.INP");
		input << h << ':' << m << ':' << s;
		input.close();
		ofstream output(testName + "/" + "CountTime.OUT");
		output << s + m * 60 + 3600 * h;
		output.close();
		printf("add test %02d: %02d:%02d:%02d\n", i, h, m, s);
	}
	return 0;
}
