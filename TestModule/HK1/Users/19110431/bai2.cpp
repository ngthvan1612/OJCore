#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int Process(char a[],char b[]);

void main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	int res=Process(a,b);
	cout<<res;
}

int Process(char a[],char b[])
{
	int sum=0;
	int l1=strlen(a);
	int l2=strlen(b);
	for(int i=0;i<l1;i++)
	{
		if(a[i]>='0' && a[i]<='9')
			sum+=(a[i]-48)*pow(16,l1-1-i);
		else
			sum+=(a[i]-55)*pow(16,l1-1-i);
	}
	for( i=0;i<l2;i++)
	{
		if(b[i]>='0' && b[i]<='9')
			sum+=(b[i]-48)*pow(16,l1-1-i);
		else
			sum+=(b[i]-55)*pow(16,l1-1-i);
	}
	return sum;
		
}