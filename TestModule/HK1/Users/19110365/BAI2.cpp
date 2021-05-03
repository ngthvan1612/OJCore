#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;

int Convert(string S)
{
	int T = 0;
	int n = S.length();
	for(int i = n - 1; i >= 0; i--)
	{
		if(S[i] >= '0' && S[i] <= '9')
		{
			int z = S[i] - '0';
			T += z * pow(16,i) ;
		}
		else
		{
			if(S[i] == 'A')
			{
				T += 10 * pow(16,i);
			}
			if(S[i] == 'B' )
			{
				T += 11 * pow(16,i);
			}
			if(S[i] == 'C' )
			{
				T += 12 * pow(16,i);
			}
			if(S[i] == 'D' )
			{
				T += 13 * pow(16,i);
			}
			if(S[i] == 'E')
			{
				T += 14 * pow(16,i);
			}
			if(S[i] == 'F')
			{
				T += 15 * pow(16,i);
			}
		}
	}
	return T;
}

void main()
{
	string A16;
	string B16;
	getline(cin, A16);
	getline(cin, B16);
	cin >> A16;
	cin >> B16;
	int A10 = Convert(A16);
	int B10 = Convert(B16);
	cout << A10 + B10;
}