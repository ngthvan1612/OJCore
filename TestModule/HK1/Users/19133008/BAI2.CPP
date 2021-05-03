#include <iostream.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int doi (char s[])
{
	int kq =0;
	int n=strlen(s);
	for (int i =0;i<n;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			kq =kq + (s[i]-48)*(int)pow(16,n-1-i);
		}
		else
		{
			kq =kq + (s[i]-55)*(int)pow(16,n-1-i);
		}
	}
	return kq ;
}

int main()
{
	;
	char s1[10];char s2[10];
	gets(s1);
	gets(s2);
	int kq = doi(s1)+doi(s2);	
	cout << kq;
	return 0;
}