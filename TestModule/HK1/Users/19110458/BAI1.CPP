#include<stdio.h>
#include<iostream>

using namespace std;

/*Point (int a, int b, int &count1, &count2)
{
	if(a==b)
	{
		count1++;
		counnt2++;
	}
	else if(a==1)
	{
		if(b==2)
			count2++;
		else
			count1++;
	}
	else if(a==2)
	{
		if(b==1)
			count1++;
		else
			count2++;
	}
	else
	{
		if(b==1)
			count2++;
		else
			count1++;
	}
}
*/
int main()
{
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	int countA=0,countB=0,countC=0;
	if(x==y)
	{
		countA++;
		countB++;
	}
	else if(x==1)
	{
		if(y==2)
			countB++;
		else
			countA++;
	}
	else if(x==2)
	{
		if(y==1)
			countA++;
		else
			countB++;
	}
	else
	{
		if(y==1)
			countB++;
		else
			countA++;
	}
//
	if(z==t)
	{
		countA++;
		countC++;
	}
	else if(z==1)
	{
		if(t==2)
			countC++;
		else
			countA++;
	}
	else if(z==2)
	{
		if(t==1)
			countA++;
		else
			countC++;
	}
	else
	{
		if(t==1)
			countC++;
		else
			countA++;
	}
	//
	if(u==v)
	{
		countC++;
		countB++;
	}
	else if(u==1)
	{
		if(v==2)
			countC++;
		else
			countB++;
	}
	else if(u==2)
	{
		if(v==1)
			countB++;
		else
			countC++;
	}
	else
	{
		if(v==1)
			countC++;
		else
			countB++;
	}
	cout<<countA<<" "<<countB<<" "<<countC;
	return 0;
}