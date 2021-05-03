
#include <iostream>

using namespace std;
int  sosanh(int a,int b);
void main()
{

	int a=0;
	int b=0;
	int c=0;
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;

	
if(sosanh(x,y)==1)
a+=3;
else if(sosanh(x,y)==0)
b+=3;
else {a+=1;b+=1;}

if(sosanh(z,t)==1)
a+=3;
else if(sosanh(z,t)==0)
c+=3;
else {a+=1;c+=1;}

if(sosanh(u,v)==1)
b+=3;
else if(sosanh(u,v)==0)
c+=3;
else {c+=1;b+=1;}

	cout<< a<<"  "<<b<<"  "<<c<<endl;



}
int sosanh(int a,int b)
{
	if(a==1)
	{
		if(b==3)
			return 1;
		else if (b==2)
			return 0;
		else if(b==a)return -1;
	}

	else if(a==2)
	{
		if (b==1)
			return 1;
		else if(b==3) return  0;
	else if(b==a)return -1;
	}

	else if( a==3)
	{	if (b==2)
			return 1;
		else if(b==1)return 0;
	else if(b==a)return -1;
	}
	


}