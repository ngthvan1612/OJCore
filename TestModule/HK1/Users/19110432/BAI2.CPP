#include <stdio.h>
#include <string.h>
#include <math.h>
long XuLy(char S[]);
void main()
{
	char A[10];
	char B[10];
	gets(A);
	gets(B);
	long kq = XuLy(A) + XuLy(B);
	printf("%d ", kq);
}
long XuLy(char S[])
{
	long result = 0;
	int len = strlen(S);
	for(int i=0;i<len;i++)
	{
		if(S[i] > '0' && S[i] < '9')
			result += (S[i] - '0')*(long)pow(16,len-i-1);
		if(S[i] == 'A')
			result += (S[i] - '0'-7)*(long)pow(16,len-i-1);
		if(S[i] == 'B')
			result += (S[i] - '0'-7)*(long)pow(16,len-i-1);
		if(S[i] == 'C')
			result += (S[i] - '0'-7)*(long)pow(16,len-i-1);
		if(S[i] == 'D')
			result += (S[i] - '0'-7)*(long)pow(16,len-i-1);
		if(S[i] == 'E')
			result += (S[i] - '0'-7)*(long)pow(16,len-i-1);
		if(S[i] == 'F')
			result += (S[i] - '0'-7)*(long)pow(16,len-i-1);
	}
	return result;
}