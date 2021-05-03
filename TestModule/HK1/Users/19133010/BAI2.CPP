#include<stdio.h>
#include<string.h>
#include<math.h>


long xuLy(char s[]);
int main()
{
	char s1[30];
	char s2[30];
	gets(s1);
	gets(s2);
	long a=xuLy(s1);
	long b=xuLy(s2);
	long c=a+b;
	printf("%ld",c);
	return 0;
}

long xuLy(char s[])
{
	long sum=0;
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			sum+=(s[i]-'0')*pow(16,n-i-1);
		}
		else
			sum+=(s[i]-55)*pow(16,n-i-1);

	}
		return sum;
}