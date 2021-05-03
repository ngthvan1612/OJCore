#include<stdio.h>
#include<string.h>
#include<math.h>
int to10 (char c);
long trans(char a[],char b[]);
void outp(long c);
void main()
{
	char a[11],b[11];
	gets(a);
	gets(b);
	long c=trans(a,b);
	outp(c);
}
int to10 (char c)
{
	int tmp;
	if ((int(c)>='0')&&(int(c)<='9')) tmp=int(c)-48;
	else tmp=int(c)-55;
	return tmp;

}
long trans(char a[],char b[])
{
	long tmp=0;
	int tmp2=0;int n=strlen(a)-1;
	for(int i=0;i<strlen(a);i++)
	{
		tmp2=to10(a[i]);
	//	printf("%d",tmp2);
		tmp=tmp+tmp2*pow(16,n);
		n=n-1;
	//	printf("(%ld)",tmp);
	}
	tmp2=0;int m=strlen(a)-1;
	for(int j=0;j<strlen(b);j++)
	{
		tmp2=to10(b[j]);
	//	printf("%d",tmp2);
		tmp=tmp+tmp2*pow(16,m);
		m=m-1;
	//	printf("(%ld)",tmp);
	}
	return tmp;
}
void outp(long c)
{
	printf("%ld",c);
}