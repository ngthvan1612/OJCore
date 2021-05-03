#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int doiCoSo(char a[])
{
	long a10=0;
	int n=strlen(a);
	a=strrev(a);
	for (int i=0; i<n; i++){
		if(a[i] <='9' && a[i] >='0')
			a10=a10+ (a[i]-'0')*(long)pow(16,i);
		else
			a10= a10+ (a[i]-55)*(long)pow(16,i);
	}
	return a10;
}
int main ()
{
	char a[100], b[100];
	long s;
	cin.getline(a,100);
	cin.getline(b,100);
	long a10=doiCoSo(a);
	long b10=doiCoSo(b);
	s=a10+b10;
	cout << s;
	return 0;
}
