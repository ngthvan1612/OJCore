#include<iostream>
using namespace std;
void nhapmang(int a[],int n)
{
	for (int i=0;i<n;i++)
		cin>>a[i];
}
int cl(int c)
{
	if (c%2==0)
		return 0;
	else return 1;
}
void check(int a[],int n)
{	int c,x,z; z=-1;
	for (int i=0;i<n-1;i++)
		{
			c=a[i];
			x=a[i+1];
			if(cl(c)==cl(x))
				{
					z=i+1;
					break;
				}
		
		}
		
cout<<z;		
}
int main()
{
	int a[100],n;
	cin>>n;
	nhapmang(a,n);
	check(a,n);
	return 0;
}

