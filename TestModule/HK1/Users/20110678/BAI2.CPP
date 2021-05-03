#include <stdio.h>
#include <string.h>

int Todec(char x[], int y)
{
	int n=strlen(x);
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if('0'<=x[i] && x[i]<='9')
		{
			ans=ans*y+(x[i]-48);
		}
		else
		{
			if('a'<=x[i] && x[i]<='z')
			{
				ans=ans*y+(x[i]-97+10);
			}
			else
			{
				ans=ans*y+(x[i]-65+10);
			}
		}
	}
	return ans;
}

int main()
{
	char a[15],b[15];
	gets(a);
	gets(b);
	int t=Todec(a,16);
	int s=Todec(b,16);
	printf("%d",t+s);
	return 0;
}