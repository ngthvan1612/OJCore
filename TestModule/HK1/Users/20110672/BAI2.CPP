#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned long int doisang10(char S[])
{
	int kq=0;
	for(int i=0;i<strlen(S);i++)
		if(S[i]>='0'&&S[i]<='9') 
			kq=kq+(S[i]-'0')*pow(16,strlen(S)-1-i);
		else kq=kq+(S[i]-55)*pow(16,strlen(S)-1-i);
		return kq;
}
void main()
{
	char A[100],B[100];
	gets(A);
	gets(B);
	unsigned long int kq=doisang10(A)+doisang10(B);
	printf("%ld",kq);
}
