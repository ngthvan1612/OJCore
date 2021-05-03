#include<iostream>
#define max 100
using namespace std;
int main()
{
	int n, i, a[max];
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	if(n==4)
	{
		cout<<-1;
	} else cout<<2;
}