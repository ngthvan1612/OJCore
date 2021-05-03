#include<iostream>
using namespace std;

int main()
{
	int A[101];
	int n;
	cin>>n;
	int i;
	for(i = 0; i < n; i++)
	{
		cin>>A[i];
	}
	int dem = 0;
	int ans = 100000;
	for(i = 0; i < n; i++)
	{
		if((A[i]%2 == 0 && A[i+ 1] % 2 ==1)  || ( A[i] % 2 == 1 && A[i + 1] % 2 == 0))
		{
			dem ++;
		}
		else 
		{
			ans = i+1;
			break;
		}
	}
	if(dem == n-1)
		cout<<-1;
	else
		cout<<ans;
	return 0;
}   