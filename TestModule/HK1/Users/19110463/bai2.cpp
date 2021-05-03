#include<stdio.h>
#include<string.h>
long tinh(char a[100],char b[100]);
long chuyencoso(char a[]);
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	long kq=tinh(a,b);
	printf("%d",kq);

	
}
long tinh(char a[100],char b[100])
{
	long soA=chuyencoso(a);
	long soB=chuyencoso(b);
	return soA+soB;


}
long chuyencoso(char a[])
{
	int i=strlen(a);
	long sum=0;
	long giaithua=1;
	while(i>0)
	{
		
		if(a[i-1]>='A'&& a[i-1]<='Z')
			sum=sum+(a[i-1]-'0'-7)*giaithua;
		if(a[i-1]>='0'&&a[i-1]<='9')
			sum=sum+(a[i-1]-'0')*giaithua;
		giaithua=giaithua*16;
		i--;
		

	}
	return sum;
}