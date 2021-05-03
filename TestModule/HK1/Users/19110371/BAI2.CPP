#include<iostream>
#include<string.h>
#include<math.h>
#define size 100
using namespace std;

long chuyendoi(char a[])
{
	long kq=0;
	int n=strlen(a);
	for (int i=0; i<n; i++)
	{
		if (a[i]>'0' && a[i]<'9')
			kq=kq+(a[i]-'0')*(long)pow(16,n-i-1);
		else
			kq=kq+(a[i]-55)*(long)pow(16,n-i-1);
	}
	return kq;
}


long tong (long s1, long s2)
{
	long s=s1+s2;
	return s;
}

void main()
{
	char a[size], b[size];
	gets(a);
	gets(b);
	long s1=chuyendoi(a);
	long s2=chuyendoi(b);
	long kq=tong(s1,s2);
	cout << kq;
}