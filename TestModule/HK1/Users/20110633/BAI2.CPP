#include<stdio.h>
#include<string.h>
#include<math.h>
double tinh(char a[],char b[]);
void xuat(double kt);

void main()
{
  char a[11],b[11];
   gets(a);
   gets(b);
  double kt=tinh(a,b);
  xuat(kt);
}
double tinh(char a[],char b[])
{
  int na=strlen(a);
  double kqa=0;
  double kqb=0;
  double tong;
  for(int i=0;i<na;i++)
  {
    if(a[i]>='0' && a[i]<='9')  kqa+=(a[i]-'0')*pow(16,na-i-1);
	else 
	{
	  kqa+=(a[i]-55)*pow(16,na-1-i);
	}
  }
  int nb=strlen(b);
   for(int j=0;j<nb;j++)
  {
    if(b[j]>='0' && b[j]<='9')  kqb+=(b[j]-'0')*pow(16,nb-j-1);
	else 
	{
	  kqb+=(b[j]-55)*pow(16,nb-1-i);
	}
	 tong=kqa+kqb;
   }
	return tong;
}
void xuat(double kt)
{
  printf("%ld",kt);
}
