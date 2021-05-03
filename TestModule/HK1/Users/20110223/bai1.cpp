#include<iostream>
using namespace std;
int kt(int a,int b)
{
	if(a==1)
	{
		if(b==1)
			return 1;
		else if(b==3)
			return 3;
		else
			return 0;
	}
	if(a==2)
	{
		if(b==3)
			return 0;
		else if(b==2)
			return 1;
		else
			return 3;
	}
	if(a==3)
	{
		if(b==3)
			return 1;
		else if(b==2)
			return 3;
		else
			return 0;
	}
	return 0;

}
void main()
{
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	int kq1,kq2,kq3;
	kq1=kt(x,y)+kt(z,t);
	kq2=kt(y,x)+kt(u,v);
	kq3=kt(t,z)+kt(v,u);
	cout<<kq1<<" "<<kq2<<" "<<kq3;
}