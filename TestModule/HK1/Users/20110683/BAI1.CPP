#include<iostream>
using namespace std;
int diem(int x,int y);
int main()
{
	int x,y,z,t,u,v;
	int diem1=0,diem2=0,diem3=0;
	cin>>x>>y>>z>>t>>u>>v;
	diem1=diem(x,y)+diem(z,t);
	diem2=diem(y,x)+diem(u,v);
	diem3=diem(t,z)+diem(v,u);
	cout<<diem1<<" "<<diem2<<" "<<diem3;
	return 0;
}
int diem(int x,int y)
{
	int diem=0;
	if (x==1&&y==3)
		diem=diem+3;
	else if (x==1&&y==2)
		diem=diem+0;
	else if (x==1&&y==1)
		diem=diem+1;
	else if (x==2&&y==2)
		diem=diem+1;
	else if (x==2&&y==1)
		diem=diem+3;
	else if (x==2&&y==3)
		diem=diem+0;
	else if (x==3&&y==3)
		diem=diem+1;
	else if (x==3&&y==2)
		diem=diem+3;
	else if (x==3&&y==1)
		diem=diem+0;
	return diem;
}