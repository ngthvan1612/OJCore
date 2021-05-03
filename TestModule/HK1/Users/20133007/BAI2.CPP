#include <stdio.h>
#include<string.h>
void main()
{
	char sa[20],sb[20];
	gets(sa);
	gets(sb);
	strrev(sa);strrev(sb);
	int a=1,tam=0,vip;
	for(int i=0;i<strlen(sa);i++)
	{
		if ((sa[i]<='9')&&(sa[i]>='0')) vip=sa[i]-'0';
		else vip=sa[i]-'A'+10;
		tam=tam+(vip*a);
		a=a*16;
	}
	int a1=1,tam1=0,vip1;
	for(int i1=0;i1<strlen(sb);i1++)
	{
		if ((sb[i1]<='9')&&(sb[i1]>='0')) vip1=sb[i1]-'0';
		else vip1=sb[i1]-'A'+10;
		tam1=tam1+(vip1*a1);
		a1=a1*16;
	}
	tam=tam+tam1;
	printf("%d",tam);
}

