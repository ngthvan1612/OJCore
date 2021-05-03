#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	int s1,s2,s3;
	scanf("%a%b%c%d%e%f", &a,&b,&c,&d, &e,&f);
	if(a=1 && b==3)
		s1=s1+3;
	else s2=s2+3;

	if(b==3&&c==2)
		s2=s2+3;
	else s3=s3+3;

	if(a==2&&c==1)
		s1=s1+3;
	else s3=s3+3;


	printf("%d%d%d",s1,s2,s3);

}