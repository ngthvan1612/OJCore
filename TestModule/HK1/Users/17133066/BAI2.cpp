#include<stdio.h>
#include<string.h>
#include<math.h>
#define SIZE 100
void nhap(char s1[], char s2[])
{
	gets(s1);
	gets(s2);
}
int check(char a[])
{
	int kq = 0;
	int len = strlen(a);
	for(int i=0; i<len;i++)
	{
		if(a[i]>'0' && a[i]<'9')
		{
			kq += (a[i]-'0')*(int)pow(16,len-i-1);
		}
		
	
	else
	{
		kq += (a[i]-55)*(int)pow(16, len-i-1);
	}
	}
	return kq;
}
int tong(char a[], char b[])
{
	return check(a)+check(b);

}
void xuat(int x)
{

	printf("%d", x);
}
void main()
{
	char s1[SIZE], s2[SIZE];
	nhap(s1,s2);
	int kq = tong(s1,s2);
	xuat(kq);
}