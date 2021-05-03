#include<iostream>
#include<math.h>
using namespace std;
unsinged long ChuyenDoi(string A);
int main()
{
	string A;
	string B;
	getline(cin, A, '\n');
	getline(cin, B, '\n');
	cout << ChuyenDoi(A);
	return 0;
}
unsinged long ChuyenDoi(string A)
{
	unsinged long sum = 0;
	int k = 0;
	for (int i = A.size() - 1; i >= 0; i--)
	{

		if (A[i] >= '0' && A[i] <= '9')
		{
			sum += (int)(A[i] - '0') * pow(16, k);
		}
		if (A[i] == 'A')
		{
			sum += 10 * pow(16, k);
		}
		if (A[i] == 'B')
		{
			sum += 10 * pow(16, k);
		}
		if (A[i] == 'C')
		{
			sum += 10 * pow(16, k);
		}
		if (A[i] == 'D')
		{
			sum += 10 * pow(16, k);
		}
		if (A[i] == 'E')
		{
			sum += 10 * pow(16, k);
		}
		if (A[i] == 'F')
		{
			sum += 10 * pow(16, k);
		}
		k++;
	}
	return sum;


}