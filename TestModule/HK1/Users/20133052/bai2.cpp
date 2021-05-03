#include<stdio.h>

int sumNumbers(charS[]);
int main()
{
	char S [MAX];
	fgets(S,201,stdin);
	int result = sumNumbers(S);
	printf("%d", result);
}
int sumNumbers(charS[])
{
	int sum=0;
	int length=strlen(S);
	int number=0;
	for (int i=0;i<length;i++)
	{
		if(S[i]>='0'&& S[i]<='9')
