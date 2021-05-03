#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int x=-1;
		if(a[i]%2==0)
		{
	     for(i=1;i<n;i++)
		 {
	     	if(a[i]%2!=i%2)
			{
	    		x=i;
				break;
			}
		 }
	
		}
		 if(a[i]%2!=0)
		 {
			 for(i=1;i<n;i++)
			 {
				 if(a[i]%2!=(i+1)%2)
				 {
					 x=i;
					 break;
				 }
			 }
		 }
	
	cout<<x;
	return 0;
}



