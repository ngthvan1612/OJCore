#include <stdio.h>
#include<string.h>
long tinht(char a[100], char b[100]);
long doiso(char a[]);
void main()
{
	char a[100], b[100];
	gets(a);
	gets(b);
	long kq = tinht(a,b);
	printf("%d", kq);
}
long tinht(char a[100], char b[100])
{
	long soA= doiso(a);
	long soB= doiso(b);
	return soA+soB;
}
long doiso(char a[])
{
	int i = strlen(a);
	long sum = 0;
	long gthua=1;
	while(i>0)
	{
		if( a[i-1]>= 'A' && a[i-1] <= 'Z')
			sum = sum + (a[i-1] - '0' -7)*gthua;
		if ( a[i-1]>= '0' && a[i-1]<= '9')
			sum = sum = (a[i-1] - '0')* gthua;
		gthua = gthua*16;
		i--;
}
return sum;
}
