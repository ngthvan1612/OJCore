#include<stdio.h>
#include<math.h>
#include<string.h>
int doicoso(char s[]);

void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	long s=doicoso(a)+doicoso(b);
	printf("%l",s);
	

}
int doicoso(char s[])
{
	int t=0;
	int n=strlen(s);
	for (int i=0;i<n;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			t=t+(s[i]-'0')*(long)pow(16,i);
		if(s[i]>='A'&&s[i]<='Z')
			t=t+(s[i]-55)*(long)pow(16,i);
	}

	return t;
}