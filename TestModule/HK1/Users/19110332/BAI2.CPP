#include<stdio.h>
#include<string.h>
#include<math.h>
long doiSangThapPhan(char S[]);

int main()
{
	char A[50];
	char B[50];
	gets(A);
	gets(B);
	strupr(A);
	strupr(B);
	printf("%ld",doiSangThapPhan(A)+doiSangThapPhan(B));
	return 0;

}
long doiSangThapPhan(char S[])
{
	long kq=0;
	int len =strlen(S);
	S= strrev(S);
	for(int i=0; i<len; i++)
		if(S[i]>='0' && S[i]<='9')
			kq+=(S[i]-'0')*(long)pow(16, i);
		else
			kq+= (S[i]-55)*(long)pow(16, i);
	return kq;
}