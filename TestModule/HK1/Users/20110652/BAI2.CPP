#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	char S[100];
	nhap(S);
	long kq=tinhtong(S);
	xuat(kq);		
}
void nhap(char S[])
{
 gets(S);
}
void xuat (long kq)
{
	printf("%ld",kq);
}
long doisangthapphan (char S[])
{
 long kq=0
	 int len=strlen (S);
 for(int i=0;i<len;i++)
	 if(S[i]>='0' && S[i]<='9')
		 kq=kq+(S[i]-'0');
	 (long)pow(16,len-i-1);
	 else
		 kq=kq+(S[i]-55)*(long)pow(16,len-i-1);
	 return kq;
}
