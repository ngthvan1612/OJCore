#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	int v = -1;
	cin>>n;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	for(int k = 0;k < n - 1;k++)
	{
		int j = k + 1;
		if((a[k] % 2 == 0 && a[j] % 2 == 0) || (a[k] % 2 != 0 && a[j] % 2 != 0))
		{
			v = j;
			break;
		}
	}
	cout<<v;
	return 0;
}

