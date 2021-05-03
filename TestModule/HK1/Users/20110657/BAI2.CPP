#include<stdio.h>
#include<string.h>
#include<conio.h>

void nhap(char x[100], char y[100]);
double tinh(char x[100], char y[100]);
void xuat(double n);

int main()
{
	char x[100], y[100];
	nhap(x,y);
	double  n=tinh(x,y);
	xuat(n);
	return 0;

}
void nhap(char x[100], char y[100])
{
	scanf("%s", x);
	scanf("%s", y);
}
double tinh(char x[100], char y[100])
{
	int i;
	double a=0,b=0;
	for(i=0; i < strlen(x); i++)
	{
		if(x[i]<58 && x[i]>47) a=((a+(int)x[i]-48))*16;
		else a=(a+(int)x[i]-(int('A')-10))*16;
	}
	for(i=0; i<strlen(y); i++)
	{
		if(y[i]<58 && y[i]>47) b=((b+(int)x[i]-48))*16;
		else b=(b+(int)y[i]-(int('A')-10))*16;
	}
	return (a+b)/16;
}
void xuat(double n)
{
	printf("%0.0f", n);
}
