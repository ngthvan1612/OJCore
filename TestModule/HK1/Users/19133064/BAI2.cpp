#include<iostream>
#include<string.h>

using namespace std;
unsigned long int chuyen(char s[]);
void main()
{
	char a[20];
	char b[20];
	gets(a);
	gets(b);
	unsigned long int m=chuyen(a);
	unsigned long int n=chuyen(b);
	cout<<m+n;
}
unsigned  long int chuyen(char s[])
{
	int l=strlen(s);
	int lt=1;
	int m=l-1;
	int t=0;
	if(s[m]=='A'|| s[m]== 'B' || s[m]== 'C' || s[m]== 'D' || s[m] == 'E' || s[m]== 'F')
	t =s[m]-55;
	else
		t=s[m]-'0';
	unsigned long int kq=t;
	
	for(int i=l-2; i>=0 ;i--)
	{
		lt=lt*16;
		m=i;
		if(s[m]=='A'|| s[m]== 'B' || s[m]== 'C' || s[m]== 'D' || s[m] == 'E' || s[m]== 'F')
		{
			t =s[m]-55;
		}
		else
		{
			t =s[m]-'0';
			
		}
		kq=kq+t*lt;

	}
	return kq;
}