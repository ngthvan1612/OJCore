#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
long doiSang10(char s[])
{
	long kq=0;
	int len=strlen(s);
	s=strrev(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			kq=kq+(s[i]-'0')*(long)pow(16,i);
		else
			kq=kq+(s[i]-55)*(long)pow(16,i);
	}
	return kq;
}

void main()
{
	char a[11],b[11];
	cin>>a>>b;
	int kq=doiSang10(a)+doiSang10(b);
	cout<<kq;
}