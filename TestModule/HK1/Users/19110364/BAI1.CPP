#include<iostream>
using namespace std;

void XuLy(int a,int b,int &kqa,int &kqb);
int main()
{
	int x,y,z,t,u,v;
	int a=0,b=0,c=0;
	cin>>x>>y>>z>>t>>u>>v;
	XuLy(x,y,a,b);
	XuLy(z,t,a,c);
	XuLy(u,v,b,c);
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
void XuLy(int a,int b,int &kqa,int &kqb)
{
	if((a==1 && b==1)||(a==2 && b==2)||(a==3 && b==3))
	{
		kqa+=1;
		kqb+=1;
	}
	else if((a==1 && b==2)||(a==2 && b==3)||(a==3 && b==1))
	{
		kqa+=0;
		kqb+=3;
	}
	else if((a==1 && b==3)||(a==2 && b==1)||(a==3 && b==2))
	{
		kqa+=3;
		kqb+=0;
	}
}