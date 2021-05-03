#include<iostream>
using namespace std;
int main()
{
	int a[99],n;
	cin >> n;
	for(int i = 0;i < n ;i++)
	{
		cin >> a[i];
	}
	for(int j = 0 ;(j + 2) <= (n-1);j++)
	{
		bool kt = true;
		if(j % 2 == 0)
		{
			if((a[i] % 2 == 0 && a[i+2] % 2 == 0) || (a[i] % 2 != 0 && a[i+2] % 2!= 0))
			{
			}
			else
			{
				kt = false;
				break;
			}
		}
		else
		{
			if((a[i] % 2 == 0 && a[i+2] % 2 == 0) || (a[i] % 2 != 0 && a[i+2] % 2!= 0))
			{
			}
			else
			{
				kt = false;
				break;
			}
		}
		if(kt == true)
		{
			cout << "-1";
		}
	}
	return 0;
}