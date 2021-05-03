#include<iostream>
using namespace std;



int main()
{
	int b;
	int i=0;
	int c;
    int a[100];
	cin >> b;
	for (i=0; i<b ;i++)
	{ cin >> a[i] ;}
	for (i=0; i<b-1 ;i++)
	{ 
		if ((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2==1&&a[i+1]%2==1))
		{ c=i+1;
		   break;}
		else 
		{c=-1;}

	}
cout <<c;





	return 0;

}