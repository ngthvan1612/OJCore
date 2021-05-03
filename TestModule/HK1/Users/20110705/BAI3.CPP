#include <iostream>
using namespace std;

void main()
{
	int A[100];
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
	cin>>A[i];
	}
	cout<<endl;

	int j;

	for( i=0;i<n-1;i++)
	{
	if( abs(A[i]-A[i+1])%2>0)
	j=-1;
	else {j=i+1;cout<<i+1<<endl;break;}
	}

	if(j==-1)
cout<<j<<endl;
	

}