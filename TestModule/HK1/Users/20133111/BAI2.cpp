#include<stdio.h>
#include<string.h>
#include<math.h>
voidnhapchuoi(char S[])
long Doi_Sang_thapphan( char S[]);
void xuat( long kq);
void main()
{
	char S[50];
	nhapchuoi(S);
	long kq=Doi_Sang_thapphan(S);
	xuat(kq);
}
void nhapchuoi(charS[])
{
	gets(S);
}
long Doi_Sang_thapphan( char S[])
{
	long kq=0;
	int len=strlen(S);
	for(int i=0;i<len;i++)
	{
		if(S[i]>'0'&& S[i]<'9')
		kq=kq+(S[i]-'0')*(long)pow(16,len-i-1);
		else 
		kq=kq + (S[i]-55)*(long)pow(16,len-i-1);
	}
	return kq;
}
void xuat(long kq)
{
	printf("%d",kq);

}

