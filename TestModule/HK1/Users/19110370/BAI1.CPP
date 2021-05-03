#include<iostream>
using namespace std;





void nhap(int n[6])
{
	for(int i=0;i<6;i++)
	{
		cin>>n[i];	
	}

}
void tinh(int n[6], int &a, int &b,int &c)
{

	if(n[0]-n[1]==1||n[0]-n[1]==-2)
	{
	a+=3;

	}
	else if(n[0]==n[1])
	{
		a++;
		b++;
	}
	else{
		b+=3;	
	}



	if(n[2]-n[3]==1||n[2]-n[3]==-2)
	{
		a+=3;

	}
	else if(n[2]==n[3])
	{
		a++;
		c++;
	}
	else{
		c+=3;
	}



	if(n[4]-n[5]==1||n[4]-n[5]==-2)
	{
	b+=3;

	}
	else if(n[4]==n[5])
	{
		c++;
		b++;
	}
	else{
		c+=3;
	}
}

void main()
{
	int n[6];
	int a=0;
	int b=0;
	int c=0;
	nhap(n);
	tinh(n,a,b,c);
	cout<<a<<" "<<b<<" "<<c;

}